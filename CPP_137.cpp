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
        string str_a = any_cast<string>(a);
        string str_b = any_cast<string>(b);

        if (str_b.size() > 0 && str_b[0] == ',') {
            str_b = str_b.substr(1);
        }

        if (stod(str_a) < stod(str_b)) {
            return b;
        }
        else if (stod(str_a) > stod(str_b)) {
            return a;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string str = any_cast<string>(a);

        if (str.size() > 0 && str[0] == ',') {
            str = str.substr(1);
        }

        if (stod(str) < b.convert_to<double>()) {
            return b;
        }
        else if (stod(str) > b.convert_to<double>()) {
            return a;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string str = any_cast<string>(b);

        if (str.size() > 0 && str[0] == ',') {
            str = str.substr(1);
        }

        if (stod(a.convert_to<string>()) < stod(str)) {
            return a;
        }
        else if (stod(a.convert_to<string>()) > stod(str)) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else {
        if (a.convert_to<int>() < b.convert_to<int>()) {
            return b;
        }
        else if (a.convert_to<int>() > b.convert_to<int>()) {
            return a;
        }
        else {
            return boost::any("None");
        }
    }
}