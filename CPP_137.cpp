#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int num = std::stoi(b.convert_to<std::string>());
        return num > a.convert_to<int>() ? b : a;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > b.convert_to<int>() ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        int num = b.convert_to<int>();
        std::string strA = a.convert_to<std::string>();
        if (strA.find('.') != std::string::npos || strA.find(',') != std::string::npos)
            return a > to_string(num) ? a : b;
        else
            return strA > to_string(num) ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        float num = b.convert_to<float>();
        std::string strA = a.convert_to<std::string>();
        if (strA.find('.') != std::string::npos || strA.find(',') != std::string::npos)
            return a > to_string(num) ? a : b;
        else
            return strA > to_string(num) ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        if (strtol(b.convert_to<std::string>().c_str(), nullptr, 10) <
            strtod(a.convert_to<std::string>().c_str(), nullptr))
            return a;
        else
            return b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a ? boost::any(b) : boost::any(a);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int num = std::stoi(b.convert_to<std::string>());
        return num > a ? boost::any(b) : boost::any(a);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > b ? boost::any(a) : boost::any(b);
    }
    else
        return boost::any("None");
}