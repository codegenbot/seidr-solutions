#include <boost/lexical_cast.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if (num1 > num2) {
            return num1;
        } else if (num2 > num1) {
            return num2;
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float num1 = boost::any_cast<float>(a);
        float num2 = boost::any_cast<float>(b);
        if (num1 > num2) {
            return num1;
        } else if (num2 > num1) {
            return num2;
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        str1.erase(remove(str1.begin(), str1.end(), ','), str1.end());
        str2.erase(remove(str2.begin(), str2.end(), ','), str2.end());
        float num1 = boost::lexical_cast<float>(str1);
        float num2 = boost::lexical_cast<float>(str2);
        if (num1 > num2) {
            return str1;
        } else if (num2 > num1) {
            return str2;
        }
    }
    return "None";
}