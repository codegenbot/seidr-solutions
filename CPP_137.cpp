#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)std::max((double)a.convert_to<int>(), b.convert_to<double>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return std::max(a, b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (std::string)std::max(a.convert_to<string>(), b.convert_to<string>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if ((int)a.convert_to<int>() > std::stoi(b.convert_to<string>())) {
            return a;
        }
        else if ((int)a.convert_to<int>() < std::stoi(b.convert_to<string>())) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if (std::stoi(a.convert_to<string>()) > (int)b.convert_to<int>()) {
            return a;
        }
        else if (std::stoi(a.convert_to<string>()) < (int)b.convert_to<int>()) {
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