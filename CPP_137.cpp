```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);

        double numA = std::stod(strA);
        double numB = std::stod(strB);

        if (numA > numB) {
            return a;
        }
        else if (numA < numB) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(std::string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        std::string str = boost::any_cast<std::string>(a);

        double num = std::stod(str);

        if (num > boost::any_cast<double>(b)) {
            return a;
        }
        else if (num < boost::any_cast<double>(b)) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(std::string)) {
        double numA = boost::any_cast<double>(a);
        std::string strB = boost::any_cast<std::string>(b);

        double numB = std::stod(strB);

        if (numA > numB) {
            return a;
        }
        else if (numA < numB) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else {
        throw std::runtime_error("Invalid input type");
    }
}