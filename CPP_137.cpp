#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > b.convert_to<float>() ? a : boost::any("None");
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return b.convert_to<string>() > a.convert_to<string>() ? b : boost::any("None");
    }
    if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        float val = std::stof(str);
        return (float)a > val ? a : boost::any("None");
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(a);
        float val = std::stof(str);
        return val > b.convert_to<float>() ? a : boost::any("None");
    }
    return "None";
}