Here is the completed code:

```cpp
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any_cast<int>(a) > boost::any_cast<int>(b)
            ? a
            : boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b)
            ? a
            : boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str1 > str2 ? a : boost::any(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int int_val = boost::any_cast<int>(a);
        float float_val = boost::any_cast<float>(b);
        return int_val > float_val ? a : boost::any(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int int_val = boost::any_cast<int>(a);
        string str_val = boost::any_cast<string>(b);
        return stoi(str_val) > int_val ? a : boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float float_val = boost::any_cast<float>(a);
        int int_val = boost::any_cast<int>(b);
        return float_val > int_val ? a : boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float float_val = boost::any_cast<float>(a);
        string str_val = boost::any_cast<string>(b);
        return stof(str_val) > float_val ? a : boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str_val = boost::any_cast<string>(a);
        int int_val = boost::any_cast<int>(b);
        return stof(str_val) > int_val ? a : boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str_val = boost::any_cast<string>(a);
        float float_val = boost::any_cast<float>(b);
        return stof(str_val) > float_val ? a : boost::any(b);
    } else {
        return "None";
    }
}