#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    std::string type_a = a.type().name();
    std::string type_b = b.type().name();

    if (type_a == type_b) {
        if (type_a == typeid(int).name()) {
            int num1 = boost::any_cast<int>(a);
            int num2 = boost::any_cast<int>(b);

            if (num1 > num2) {
                return num1;
            } else if (num1 < num2) {
                return num2;
            }
        } else if (type_a == typeid(float).name()) {
            float num1 = boost::any_cast<float>(a);
            float num2 = boost::any_cast<float>(b);

            if (num1 > num2) {
                return num1;
            } else if (num1 < num2) {
                return num2;
            }
        } else if (type_a == typeid(std::string).name()) {
            std::string str1 = boost::any_cast<std::string>(a);
            std::string str2 = boost::any_cast<std::string>(b);

            if (str1 > str2) {
                return str1;
            } else if (str1 < str2) {
                return str2;
            }
        }
    }
    return boost::any();
}