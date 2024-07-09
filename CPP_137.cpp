#include <boost/variant.hpp>
#include <iostream>
#include <string>
#include <stdexcept>

boost::variant<int, float, double, std::string> compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return ((int)boost::any_cast<int>(a) > boost::any_cast<float>(b)) ? int(((int)boost::any_cast<int>(a) > boost::any_cast<float>(b))) : float((float)boost::any_cast<int>(a) > boost::any_cast<float>(b));
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return ((int)boost::any_cast<int>(a) > boost::any_cast<double>(b)) ? int(((int)boost::any_cast<int>(a) > boost::any_cast<double>(b))) : double((double)boost::any_cast<int>(a) > boost::any_cast<double>(b));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str = boost::any_cast<std::string>(a);
        int num = boost::any_cast<int>(b);
        return (std::stoi(str) > num) ? std::string((std::stoi(str) > num).name()) : int(std::stoi(str) > num);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (boost::any_cast<float>(a) > static_cast<float>(boost::any_cast<int>(b))) ? float((boost::any_cast<float>(a) > static_cast<float>(boost::any_cast<int>(b)))) : int(static_cast<float>(boost::any_cast<int>(b)) > boost::any_cast<float>(a));
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (boost::any_cast<double>(a) > static_cast<double>(boost::any_cast<int>(b))) ? double((boost::any_cast<double>(a) > static_cast<double>(boost::any_cast<int>(b)))) : int(static_cast<double>(boost::any_cast<int>(b)) > boost::any_cast<double>(a));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(float)) {
        std::string str = boost::any_cast<std::string>(a);
        float num = boost::any_cast<float>(b);
        return (std::stof(str) > num) ? std::string((std::stof(str) > num).name()) : float(std::stof(str) > num);
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string str = boost::any_cast<std::string>(a);
        double num = boost::any_cast<double>(b);
        return (std::stod(str) > num) ? std::string((std::stod(str) > num).name()) : double(std::stod(str) > num);
    } else {
        return 0;
    }
}