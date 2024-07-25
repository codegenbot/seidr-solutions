Here is the completed code:

```cpp
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > boost::any_cast<int>(a) ? b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b) > boost::any_cast<double>(a) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        int i = boost::any_cast<int>(a);
        return stod(s) > i ? b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        double d = boost::any_cast<double>(a);
        return stod(s) > d ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s = boost::any_cast<string>(a);
        int i = boost::any_cast<int>(b);
        return stod(s) > i ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string s = boost::any_cast<string>(a);
        double d = boost::any_cast<double>(b);
        return stod(s) > d ? a : b;
    }
    else {
        return boost::any("None");
    }
}