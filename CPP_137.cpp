#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(typeid(std::string), "None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double x = boost::any_cast<double>(a);
        double y = boost::any_cast<double>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(typeid(std::string), "None"));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string x = boost::any_cast<std::string>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(typeid(std::string), "None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int x = boost::any_cast<int>(a);
        double y = boost::any_cast<double>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(typeid(std::string), "None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int x = boost::any_cast<int>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (x > convert_to_int(y)) ? a : ((x < convert_to_int(y)) ? b : boost::any(typeid(std::string), "None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        double x = boost::any_cast<double>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((x < y) ? b : boost::any(typeid(std::string), "None"));
    } else if (a.type() == typeid(double) && b.type() == typeid(std::string)) {
        double x = boost::any_cast<double>(a);
        std::string y = boost::any_cast<std::string>(b);
        return (x > convert_to_double(y)) ? a : ((x < convert_to_double(y)) ? b : boost::any(typeid(std::string), "None"));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string x = boost::any_cast<std::string>(a);
        int y = boost::any_cast<int>(b);
        return (x > convert_to_string(y)) ? a : ((x < convert_to_string(y)) ? b : boost::any(typeid(std::string), "None"));
    } else if (a.type() == typeid(std::string) && b.type() == typeid(double)) {
        std::string x = boost::any_cast<std::string>(a);
        double y = boost::any_cast<double>(b);
        return (x > convert_to_string(y)) ? a : ((x < convert_to_string(y)) ? b : boost::any(typeid(std::string), "None"));
    }

    return boost::any("Invalid input");
}

int convert_to_int(const std::string& s) {
    int x;
    std::istringstream iss(s);
    if (!(iss >> x))
        throw std::runtime_error("Failed to parse integer");
    return x;
}

double convert_to_double(const std::string& s) {
    double x;
    std::istringstream iss(s);
    if (!(iss >> x))
        throw std::runtime_error("Failed to parse double");
    return x;
}

std::string convert_to_string(double d) {
    return boost::str(boost::format("%f") % d);
}