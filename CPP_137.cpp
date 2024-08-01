#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)std::max((double)a.convert_to<int>(), b.convert_to<double>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return std::any_cast<double>(a) > std::any_cast<double>(b) ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return (std::string)std::max(a.convert_to<std::string>(), b.convert_to<std::string>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int aInt = std::any_cast<int>(a);
        int bInt = std::stoi(std::any_cast<std::string>(b));
        return aInt > bInt ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        int aInt = std::stoi(std::any_cast<std::string>(a));
        int bInt = std::any_cast<int>(b);
        return aInt > bInt ? a : b;
    }
    else {
        return boost::any("None");
    }
}