Here is the completed code:

```cpp
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int) a > (double) b ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int) a > (double) b ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float) a > (int) b ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double) a > (int) b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        double x = atof((string) a.to_pointer());
        double y = (double) b;
        return x > y ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double x = atof((string) a.to_pointer());
        double y = (double) b;
        return x > y ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        double x = (float) a;
        double y = atof((string) b.to_pointer());
        return x > y ? a : b;
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double x = (double) a;
        double y = atof((string) b.to_pointer());
        return x > y ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        double x = atof((string) a.to_pointer());
        double y = atof((string) b.to_pointer());
        return x > y ? a : b;
    }
    return boost::any("None");
}