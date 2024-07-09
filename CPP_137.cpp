```
#include <iostream>
#include <string>
#include <boost/any.hpp>

bool compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (boost::any_cast<int>(a)) > (boost::any_cast<double>(b));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (boost::any_cast<double>(a)) > (boost::any_cast<int>(b));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        double n1 = std::stod(boost::any_cast<std::string>(a));
        double n2 = std::stod(boost::any_cast<std::string>(b));
        return n1 > n2 ? a : b;
    }
    else if (a.type() == typeid(std::string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        double n = std::stod(boost::any_cast<std::string>(a));
        return n > boost::any_cast<double>(b) ? a : b;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(std::string)) {
        double n1 = boost::any_cast<double>(a);
        double n2 = std::stod(boost::any_cast<std::string>(b));
        return n1 > n2 ? a : b;
    }
    else if (a.type() == typeid(int) && a.convert_to<int>() == a.convert_to<double>()) {
        return boost::any();
    }
    else if (a.type() == typeid(double) && a.convert_to<double>() == a.convert_to<int>()) {
        return boost::any();
    }
    else if (a.type() == typeid(std::string) && boost::any_cast<std::string>(a).find('.') == std::string::npos) {
        return boost::any();
    }
    return a;
}

int main() {
    boost::any a = 5; // your input
    boost::any b = 3.14; // your input
    assert(compare_one(a, b) == a);
    return 0;
}