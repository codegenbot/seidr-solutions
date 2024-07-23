#include <boost/any.hpp>
#include <string>
#include <cassert>
#include <cstdio>

boost::any compare_one(const boost::any& a, const boost::any& b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        } else {
            return std::string("None");
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        } else {
            return std::string("None");
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        float num1, num2;
        if (std::sscanf(boost::any_cast<std::string>(a).c_str(), "%f", &num1) == 1 &&
            std::sscanf(boost::any_cast<std::string>(b).c_str(), "%f", &num2) == 1) {
            if (num1 > num2) {
                return a;
            } else if (num1 < num2) {
                return b;
            } else {
                return std::string("None");
            }
        } else {
            return std::string("None");
        }
    } else {
        return std::string("None");
    }
}

std::cout << boost::any_cast<std::string>(compare_one(std::string("1"), 1)) << std::endl;