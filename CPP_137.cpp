Here is the completed code:

```cpp
#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a > (float) b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int) a > (double) b ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float) a > (int) b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double) a > (int) b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return (string) a > to_string((float) b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return (string) a > to_string((double) b) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return to_string((float) a) > (string) b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return to_string((double) a) > (string) b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string) a > (string) b ? a : b;
    }
    else {
        return "None";
    }
}