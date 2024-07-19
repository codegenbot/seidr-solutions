#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(double())) {
        double da = any_cast<double>(a);
        double db = any_cast<double>(b);
        return (da > db) ? a : ((da < db) ? b : boost::any("None"));
    } else if (is_any_of<a>(std::string())) {
        std::string sa = any_cast<std::string>(a);
        double da = std::stod(sa);
        double db = any_cast<double>(b);
        return (da > db) ? a : ((da < db) ? b : boost::any("None"));
    } else if (is_any_of<a>(std::string())) {
        std::string sa = any_cast<std::string>(a);
        std::string sb = any_cast<std::string>(b);
        double da = std::stod(sa);
        double db = std::stod(sb);
        return (da > db) ? a : ((da < db) ? b : boost::any("None"));
    } else {
        throw std::runtime_error("Invalid type");
    }
}

int main() {
    boost::any a, b;
    std::cout << "Enter the first value: ";
    if (std::cin >> a) {}
    else {
        throw std::runtime_error("Invalid input for a");
    }

    std::cout << "Enter the second value: ";
    if (std::cin >> b) {}
    else {
        throw std::runtime_error("Invalid input for b");
    }

    boost::any result = compare_one(a, b);
    if (result.type() == typeid(double)) {
        double da = any_cast<double>(result);
        if (da > 0.0)
            std::cout << "The first value is greater.\n";
        else
            std::cout << "The values are equal or the second value is greater.\n";
    } else if (result.type() == typeid(std::string)) {
        std::string s = any_cast<std::string>(result);
        std::cout << "The values are equal: " << s << ".\n";
    } else {
        throw std::runtime_error("Invalid result");
    }
}