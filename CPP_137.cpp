#include <boost/any.hpp>
#include <string>
#include <vector>
#include <stdexcept>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(b.convert_to<int>() > a.convert_to<int())) ? b : a;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = a.convert_to<std::string>();
        std::string str2 = b.convert_to<std::string>();
        return boost::any(str2 > str1 ? b : a);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        float f = b.convert_to<float>();
        std::string s = a.convert_to<std::string>();
        size_t pos = s.find('.');
        if (pos != std::string::npos) {
            s = s.substr(0, pos);
        }
        return boost::any(f > std::stof(s)) ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(std::string)) {
        float f = a.convert_to<float>();
        std::string s = b.convert_to<std::string>();
        size_t pos = s.find(',');
        if (pos != std::string::npos) {
            s = s.substr(0, pos);
        }
        return boost::any(std::stof(s) > f)) ? b : a;
    } else {
        int x = a.convert_to<int>();
        int y = b.convert_to<int>();
        if (x == y) {
            return boost::any("None");
        } else {
            return boost::any(x > y) ? a : b;
        }
    }
}