#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)std::max((double)a.convert_to<int>(), b.convert_to<double>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return std::any_cast<double>(b);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return a > b ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int x = std::stoi(b.convert_to<std::string>());
        if ((int)a.convert_to<int>() > x) {
            return a;
        }
        else if ((int)a.convert_to<int>() < x) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        int x = (int)b.convert_to<int>();
        if (std::stoi(a.convert_to<std::string>()) > x) {
            return a;
        }
        else if (std::stoi(a.convert_to<std::string>()) < x) {
            return boost::any("None");
        }
        else {
            return b;
        }
    }
    else {
        return boost::any("None");
    }
}