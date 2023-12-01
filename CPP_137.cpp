#include <boost/lexical_cast.hpp>
#include <boost/any.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if (num1 > num2) {
            return num1;
        } else if (num2 > num1) {
            return num2;
        } else {
            return boost::any();
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        if (num1 > num2) {
            return num1;
        } else if (num2 > num1) {
            return num2;
        } else {
            return boost::any();
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        float num1, num2;
        try {
            num1 = boost::lexical_cast<float>(str1);
            num2 = boost::lexical_cast<float>(str2);
        } catch (...) {
            return boost::any();
        }
        if (num1 > num2) {
            return str1;
        } else if (num2 > num1) {
            return str2;
        } else {
            return boost::any();
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(std::string)) {
        int num1 = boost::any_cast<int>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        float num2;
        try {
            num2 = boost::lexical_cast<float>(str2);
        } catch (...) {
            return boost::any();
        }
        if (num1 > num2) {
            return num1;
        } else if (num2 > num1) {
            return str2;
        } else {
            return boost::any();
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(int)) {
        std::string str1 = boost::any_cast<std::string>(a);
        int num2 = boost::any_cast<int>(b);
        float num1;
        try {
            num1 = boost::lexical_cast<float>(str1);
        } catch (...) {
            return boost::any();
        }
        if (num1 > num2) {
            return str1;
        } else if (num2 > num1) {
            return num2;
        } else {
            return boost::any();
        }
    } else {
        return boost::any();
    }
}