#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any((int)std::max((double)a.convert_to<int>(), b.convert_to<double>()));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return std::max(a, b);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        return boost::any((std::string)std::max(a.convert_to<std::string>(), b.convert_to<std::string>()));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int aInt = (int)a.convert_to<int>();
        long bLong = std::stoll(b.convert_to<std::string>());
        if (aInt > bLong) {
            return a;
        }
        else if (aInt < bLong) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        long aLong = std::stoll(a.convert_to<std::string>());
        int bInt = (int)b.convert_to<int>();
        if (aLong > bInt) {
            return a;
        }
        else if (aLong < bInt) {
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

int main() {
    boost::any a = 5;
    boost::any b = "10";
    boost::any result = compare_one(a, b);
    
    if (result.type() == typeid(std::string)) {
        std::cout << result.convert_to<std::string>() << std::endl;
    }
    else {
        std::cout << result.convert_to<int>() << std::endl;
    }

    return 0;
}