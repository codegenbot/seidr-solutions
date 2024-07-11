#include <boost/variant.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::variant<int, double, std::string> compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return static_cast<boost::variant<int, double, std::string>>(b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return static_cast<boost::variant<int, double, std::string>>(b);
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string strA = boost::any_cast<std::string>(a);
        std::string strB = boost::any_cast<std::string>(b);

        if (strA > strB) {
            return a;
        }
        else if (strA < strB) {
            return b;
        }
        else {
            return b;
        }
    }
    else if ((a.type() == typeid(double) && b.type() == typeid(std::string)) || 
             (a.type() == typeid(std::string) && b.type() == typeid(double))) {
        double numA = boost::any_cast<double>(a);
        double numB = boost::any_cast<double>(b);

        if (numA > numB) {
            return a;
        }
        else if (numA < numB) {
            return b;
        }
        else {
            return b;
        }
    }

    return boost::variant<int, double, std::string>();
}