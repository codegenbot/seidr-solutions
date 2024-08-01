Here is the completed code:

```cpp
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if (stod(b.to_string()) > a.convert_to<int>()) {
            return b;
        } else {
            return "None";
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (stod(a.convert_to<string>()) > b.convert_to<int>()) {
            return a;
        } else {
            return "None";
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (stod(a.convert_to<string>()) > boost::any_cast<float>(b)) {
            return a;
        } else {
            return "None";
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        if (stod(a.convert_to<string>()) > boost::any_cast<double>(b)) {
            return a;
        } else {
            return "None";
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        if (boost::any_cast<float>(a) > stod(b.convert_to<string>())) {
            return a;
        } else {
            return "None";
        }
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        if (boost::any_cast<double>(a) > stod(b.convert_to<string>())) {
            return a;
        } else {
            return "None";
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stod(a.convert_to<string>()) > stod(b.convert_to<string>())) {
            return a;
        } else if (stod(a.convert_to<string>()) < stod(b.convert_to<string>())) {
            return b;
        } else {
            return "None";
        }
    }
    else {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        } else {
            return "None";
        }
    }
}