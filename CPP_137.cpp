#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if (num1 == num2)
            return "None";
        else
            return (num1 > num2) ? num1 : num2;
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        if (num1 == num2)
            return "None";
        else
            return (num1 > num2) ? num1 : num2;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        float num1, num2;
        try {
            num1 = boost::lexical_cast<float>(str1);
            num2 = boost::lexical_cast<float>(str2);
            if (num1 == num2)
                return "None";
            else
                return (num1 > num2) ? num1 : num2;
        } catch (...) {
            return (str1 > str2) ? str1 : str2;
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num1 = boost::any_cast<int>(a);
        string str2 = boost::any_cast<string>(b);
        float num2;
        try {
            num2 = boost::lexical_cast<float>(str2);
            return (num1 > num2) ? num1 : num2;
        } catch (...) {
            return (num1 > str2) ? num1 : str2;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str1 = boost::any_cast<string>(a);
        int num2 = boost::any_cast<int>(b);
        float num1;
        try {
            num1 = boost::lexical_cast<float>(str1);
            return (num1 > num2) ? num1 : num2;
        } catch (...) {
            return (str1 > num2) ? str1 : num2;
        }
    } else {
        return "None";
    }
}