#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a.convert_to<int>() > (float)b.convert_to<float>() ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (float)a.convert_to<float>() > stof(b.convert_to<string>()) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return stof(a.convert_to<string>()) > stof(b.convert_to<string>()) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a.convert_to<int>() > (int)b.convert_to<int>() ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        return stof(a.convert_to<string>()) > (float)b.convert_to<float>() ? a : b;
    }
    return boost::any("None");
}