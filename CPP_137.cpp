#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)std::max((double)a.convert_to<int>(), b.convert_to<double>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return std::any_cast<double>(a) > std::any_cast<double>(b) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (std::string)std::max(a.convert_to<string>(), b.convert_to<string>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int aInt = std::any_cast<int>(a);
        string bStr = std::any_cast<string>(b);
        return aInt > std::stoi(bStr) ? a : (aInt < std::stoi(bStr) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string aStr = std::any_cast<string>(a);
        int bInt = std::any_cast<int>(b);
        return std::stoi(aStr) > bInt ? a : (std::stoi(aStr) < bInt ? b : boost::any("None"));
    }
    else {
        return boost::any("None");
    }
}