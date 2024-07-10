Here is the completed code:

```cpp
#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        if (stod(sa) > stod(sb))
            return a;
        else if (stod(sa) < stod(sb))
            return b;
        else
            return any("None");
    }
    else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        string s = boost::any_cast<string>(a);
        if (b.type() == typeid(int)) {
            int i = boost::any_cast<int>(b);
            if (stod(s) > i)
                return a;
            else
                return any("None");
        }
        else if (b.type() == typeid(double)) {
            double d = boost::any_cast<double>(b);
            if (stod(s) > d)
                return a;
            else
                return any("None");
        }
    }
    else if (a.type() != typeid(string) && b.type() == typeid(string)) {
        string s = boost::any_cast<string>(b);
        if (a.type() == typeid(int)) {
            int i = boost::any_cast<int>(a);
            if (i > stod(s))
                return a;
            else
                return any("None");
        }
        else if (a.type() == typeid(double)) {
            double d = boost::any_cast<double>(a);
            if (d > stod(s))
                return a;
            else
                return any("None");
        }
    }
    return a;
}