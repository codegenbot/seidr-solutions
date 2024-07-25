#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a.convert_to<int>() > (double)b.convert_to<double>() ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        return (int)a.convert_to<int>() > std::stoi(b.convert_to<std::string>()) ? b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        return (double)a.convert_to<double>() > std::stod(b.convert_to<std::string>()) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a.convert_to<int>() > (int)b.convert_to<int>() ? &b : &a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return (double)a.convert_to<double>() > (double)b.convert_to<double>() ? &b : &a;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return std::stod(a.convert_to<std::string>()) > std::stod(b.convert_to<std::string>()) ? &b : &a;
    }
    else {
        return boost::any("None");
    }
}