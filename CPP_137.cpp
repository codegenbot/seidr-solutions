```cpp
#include <boost/any.hpp>
#include <boost/conversion.hpp>
#include <boost/algorithm/string.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        std::string str = (std::string)a.convert_to<std::string>();
        float f = (float)b.convert_to<float>();
        return (f > std::stof(str)) ? boost::any(f) : boost::any(str);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = (std::string)a.convert_to<std::string>();
        std::string str2 = (std::string)b.convert_to<std::string>();
        return (std::stof(str2) > std::stof(str1)) ? boost::any(str2) : (std::stof(str1) == std::stof(str2)) ? boost::any("None") : boost::any(str1);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int i = (int)a.convert_to<int>();
        std::string str = (std::string)b.convert_to<std::string>();
        return (std::stof(str) > i) ? boost::any(str) : (i == std::stof(str)) ? boost::any("None") : boost::any(i);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str = (std::string)a.convert_to<std::string>();
        int i = (int)b.convert_to<int>();
        return (std::stof(str) > i) ? boost::any(str) : (i == std::stof(str)) ? boost::any("None") : boost::any(i);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = (float)a.convert_to<float>();
        int i = (int)b.convert_to<int>();
        return (f > i) ? boost::any(f) : (i == f) ? boost::any("None") : boost::any(i);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int i1 = (int)a.convert_to<int>();
        int i2 = (int)b.convert_to<int>();
        return (i2 > i1) ? boost::any(i2) : (i1 == i2) ? boost::any("None") : boost::any(i1);
    }
    else {
        return "None";
    }
}