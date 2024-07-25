#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int b_int = std::stoi(b.convert_to<std::string>());
        return (int)a > b_int ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        int b_int = (int)b;
        return std::stoi(a.convert_to<std::string>()) > b_int ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        float b_float = (float)b;
        return std::stoi(a.convert_to<std::string>()) > b_float ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return std::stoi(a.convert_to<std::string>()) > std::stoi(b.convert_to<std::string>()) ? a : b;
    }
    else {
        return boost::any("None");
    }
}