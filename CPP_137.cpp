Here is the completed code:

```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return max((int)a.convert_to<int>(), (double)b.convert_to<double>());
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return max((double)a.convert_to<double>(), (int)b.convert_to<int>());
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (string)a.convert_to<string>() > (string)b.convert_to<string>()
            ? a : ((string)a.convert_to<string>() < (string)b.convert_to<string>())
                ? b : boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)a.convert_to<int>() > stoi((string)b.convert_to<string()])
            ? a : ((int)a.convert_to<int>() < stoi((string)b.convert_to<string())))
                ? b : boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return stoi((string)a.convert_to<string>()) > (int)b.convert_to<int>()
            ? a : ((int)b.convert_to<int>() < stoi((string)a.convert_to<string>()))
                ? a : boost::any("None");
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return (double)a.convert_to<double>() > stod((string)b.convert_to<string>())
            ? a : ((double)a.convert_to<double>() < stod((string)b.convert_to<string>()))
                ? b : boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return stod((string)a.convert_to<string>()) > (double)b.convert_to<double>()
            ? a : ((double)b.convert_to<double>() < stod((string)a.convert_to<string>()))
                ? a : boost::any("None");
    } else {
        return boost::any("None");
    }
}