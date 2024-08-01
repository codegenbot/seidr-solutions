#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)std::max((double)a.convert_to<int>(), b.convert_to<double>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return std::any_cast<double>(b);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return (std::string)std::max(a.convert_to<std::string>(), b.convert_to<std::string>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int aInt = a.convert_to<int>();
        std::string bStr = b.convert_to<std::string>();
        return aInt > std::stoi(bStr) ? a : b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string aStr = a.convert_to<std::string>();
        int bInt = b.convert_to<int>();
        return std::stoi(aStr) > bInt ? a : b;
    }
    else {
        return boost::any("None");
    }
}

int main() {
    boost::any a(boost::any_cast<int>(10));
    boost::any b(boost::any_cast<float>(20.5f));

    boost::any result = compare_one(a, b);
    
    if (result.type() == typeid(int)) {
        std::cout << "The maximum is: " << boost::any_cast<int>(result) << std::endl;
    }
    else if (result.type() == typeid(double)) {
        std::cout << "The maximum is: " << boost::any_cast<double>(result) << std::endl;
    }
    else if (result.type() == typeid(std::string)) {
        std::cout << "The maximum is: " << boost::any_cast<std::string>(result) << std::endl;
    }
    else {
        std::cout << "The maximum is: None" << std::endl;
    }

    return 0;
}