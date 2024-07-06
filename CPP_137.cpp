```cpp
#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(b.convert_to<int>() > a.convert_to<int>()) ? b : a;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = a.convert_to<std::string>();
        std::string str2 = b.convert_to<std::string>();
        size_t pos = str1.find('.');
        if (pos != std::string::npos) {
            str1 = str1.substr(0, pos);
        }
        pos = str2.find(',');
        if (pos != std::string::npos) {
            str2 = str2.substr(0, pos);
        }
        return boost::any(str2 > str1 ? b : a);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        float f = b.convert_to<float>();
        std::string s = a.convert_to<std::string>();
        size_t pos = s.find('.');
        if (pos != std::string::npos) {
            s = s.substr(0, pos);
        }
        return boost::any(f > std::stof(s) ? b : a);
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float f = a.convert_to<float>();
        std::string s = b.convert_to<std::string>();
        size_t pos = s.find(',');
        if (pos != std::string::npos) {
            s = s.substr(0, pos);
        }
        return boost::any(std::stof(s) > f ? b : a);
    } else {
        return boost::any(a.convert_to<int>() == b.convert_to<int>()) ? boost::any("None") : (a.convert_to<float>() > b.convert_to<float>()) ? a : b;
    }
}