Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        istringstream iss(str1);
        double d1;
        iss >> d1;
        istringstream iss2(str2);
        double d2;
        iss2 >> d2;
        return d1 > d2 ? a : b;
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string str = any_cast<string>(a);
        istringstream iss(str);
        double d;
        iss >> d;
        return b > boost::any(d) ? a : b;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        string str = any_cast<string>(b);
        istringstream iss(str);
        double d;
        iss >> d;
        return a > boost::any(d) ? a : b;
    }
    else if (a.convertible_to(b)) {
        return a > b ? a : b;
    }
    else {
        return any("None");
    }
}