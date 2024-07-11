#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
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
            return boost::any((boost::any_cast<int>(a) == boost::any_cast<int>(b)) ? 0 : 1);
        }
    }
    else if ((a.type() == typeid(double) && b.type() == typeid(std::string)) || 
             (a.type() == typeid(std::string) && b.type() == typeid(double))) {
        double dA = boost::any_cast<double>(a);
        double dB = boost::any_cast<double>(b);

        if (dA > dB) {
            return a;
        }
        else if (dA < dB) {
            return b;
        }
        else {
            return boost::any(0);
        }
    }

    return boost::any();
}