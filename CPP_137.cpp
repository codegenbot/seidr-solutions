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
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);

        if (str1 > str2) {
            return a;
        }
        else if (str1 < str2) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if ((a.type() == typeid(int) && b.type() == typeid(std::string)) || 
             (a.type() == typeid(std::string) && b.type() == typeid(int))) {
        std::string str = boost::any_cast<std::string>(b);

        if (boost::any_cast<int>(a) > std::stoi(str)) {
            return a;
        }
        else if (boost::any_cast<int>(a) < std::stoi(str)) {
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