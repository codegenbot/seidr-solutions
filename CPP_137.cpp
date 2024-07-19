#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <boost/type_index.hpp>

int max(int a, float b) {
    if (a > b)
        return a;
    else
        return b;
}

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(max((int)a.convert_to<int>(), (float)b.convert_to<float>()));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(max((float)a.convert_to<float>(), (int)b.convert_to<int>()));
    }
    else if (a.type() == typeid(std::string) && b.type() == typeid(std::string)) {
        std::string str1 = a.convert_to<std::string>();
        std::string str2 = b.convert_to<std::string>();

        int num1 = 0, num2 = 0;
        bool dot1 = false, dot2 = false;

        for (int i = 0; i < str1.length(); i++) {
            if (!dot1 && !isdigit(str1[i])) {
                dot1 = true;
                continue;
            }
            if (!dot2 && !isdigit(str2[i])) {
                dot2 = true;
                continue;
            }
            num1 = num1 * 10 + (str1[i] - '0');
            num2 = num2 * 10 + (str2[i] - '0');
        }

        return str1 > str2 ? a : b;
    }
    else if (a.type() == typeid(std::string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        std::string str = a.convert_to<std::string>();

        int num = 0;
        bool dot = false;

        for (int i = 0; i < str.length(); i++) {
            if (!dot && !isdigit(str[i])) {
                dot = true;
                continue;
            }
            num = num * 10 + (str[i] - '0');
        }

        return b.convert_to<boost::any>() > boost::any(num) ? b : a;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(std::string)) {
        std::string str = b.convert_to<std::string>();

        int num = 0;
        bool dot = false;

        for (int i = 0; i < str.length(); i++) {
            if (!dot && !isdigit(str[i])) {
                dot = true;
                continue;
            }
            num = num * 10 + (str[i] - '0');
        }

        return a.convert_to<boost::any>() > boost::any(num) ? a : b;
    }
    else {
        return boost::any(typeid(int));
    }
}

int main() {
    boost::any a = "123";
    boost::any b = "456";

    std::cout << boost::any_cast<int>(compare_one(a, b)) << std::endl;

    return 0;
}