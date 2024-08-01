#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)std::max((double)a.convert_to<int>(), b.convert_to<double>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return std::any_cast<double>(a) > std::any_cast<double>(b) ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return (std::any_cast<std::string>(a) > std::any_cast<std::string>(b)) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int value = std::stoi(std::any_cast<std::string>(b));
        return (std::any_cast<int>(a) > value) ? a : (std::any_cast<int>(a) < value) ? b : boost::any("None");
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        int value = std::any_cast<int>(b);
        return (std::stoi(std::any_cast<std::string>(a)) > value) ? a : (std::stoi(std::any_cast<std::string>(a)) < value) ? b : boost::any("None");
    }
    else {
        return boost::any("None");
    }
}

int main() {
    std::cout << std::any_cast<boost::any>(compare_one(boost::any(5), boost::any(3.0))) << std::endl;
    std::cout << std::any_cast<boost::any>(compare_one(boost::any(3.14), boost::any(3.14159))) << std::endl;
    std::cout << std::any_cast<boost::any>(compare_one(boost::any("5"), boost::any("3"))) << std::endl;
    std::cout << std::any_cast<boost::any>(compare_one(boost::any(5), boost::any("3.0"))) << std::endl;
    std::cout << std::any_cast<boost::any>(compare_one(boost::any("5"), boost::any(3))) << std::endl;
    return 0;
}