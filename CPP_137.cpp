#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any((int)std::max((double)a.convert_to<int>(), b.convert_to<double>()));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return std::max(a, b);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return boost::any((std::string)std::max(a.convert_to<std::string>(), b.convert_to<std::string>()));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int x = (int)a.convert_to<int>();
        std::string y = b.convert_to<std::string>();
        if (x > std::stoi(y)) {
            return a;
        }
        else if (x < std::stoi(y)) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string x = a.convert_to<std::string>();
        int y = (int)b.convert_to<int>();
        if (std::stoi(x) > y) {
            return a;
        }
        else if (std::stoi(x) < y) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else {
        return boost::any("None");
    }
}