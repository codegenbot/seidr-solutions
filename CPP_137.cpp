```
#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        double num1 = std::stod(a.convert_to<std::string>().c_str());
        double num2 = std::stod(b.convert_to<std::string>().c_str());
        return (num1 > num2) ? a : ((num1 < num2) ? b : boost::any("None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        double num1 = std::stod(a.convert_to<std::string>().c_str());
        double num2 = std::stod(b.convert_to<std::string>().c_str());
        return (num1 > num2) ? a : ((num1 < num2) ? b : boost::any("None"));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        int num1 = std::stoi(a.convert_to<std::string>().erase(0, 1).erase(a.convert_to<std::string>().find(',') + 1).c_str());
        int num2 = std::stoi(b.convert_to<std::string>().erase(0, 1).erase(b.convert_to<std::string>().find(',') + 1).c_str());
        return (num1 > num2) ? a : ((num1 < num2) ? b : boost::any("None"));
    } else if (a.type() == typeid(double) && a.convert_to<double>() > b.convert_to<double>()) {
        return a;
    } else if (b.type() == typeid(double) && b.convert_to<double>() > a.convert_to<double>()) {
        return b;
    } else {
        return boost::any("None");
    }
}