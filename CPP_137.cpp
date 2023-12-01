#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>
#include <string>
#include <algorithm>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if (num1 > num2) {
            return num1;
        } else if (num1 < num2) {
            return num2;
        } else {
            return boost::any();
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        if (num1 > num2) {
            return num1;
        } else if (num1 < num2) {
            return num2;
        } else {
            return boost::any();
        }
    } else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = boost::any_cast<std::string>(a);
        std::string str2 = boost::any_cast<std::string>(b);
        std::replace(str1.begin(), str1.end(), ',', '.');
        std::replace(str2.begin(), str2.end(), ',', '.');
        try {
            float num1 = boost::lexical_cast<float>(str1);
            float num2 = boost::lexical_cast<float>(str2);
            if (num1 > num2) {
                return str1;
            } else if (num1 < num2) {
                return str2;
            } else {
                return boost::any();
            }
        } catch (const boost::bad_lexical_cast&) {
            return boost::any();
        }
    } else {
        return boost::any();
    }
}