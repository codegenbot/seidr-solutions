Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 > str2)
            return a;
        else if (str1 < str2)
            return b;
        else
            return any("None");
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string str = boost::any_cast<string>(a);
        int num = boost::any_cast<int>(b);
        double dnum = boost::any_cast<double>(b);
        if (str > std::to_string(num))
            return a;
        else if (str > std::to_string(dnum))
            return a;
        else
            return any("None");
    }
    else {
        return any("None");
    }
}