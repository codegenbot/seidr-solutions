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
        return a.convert_to<std::string>() > b.convert_to<std::string>() ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int x = std::any_cast<int>(a);
        long y = std::stoll(b.convert_to<std::string>());
        return x > y ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        long x = std::stoll(a.convert_to<std::string>());
        int y = std::any_cast<int>(b);
        return x > y ? a : b;
    }
    else {
        return boost::any("None");
    }
}