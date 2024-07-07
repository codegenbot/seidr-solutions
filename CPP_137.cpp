#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return max(a.convert_to<float>(), boost::any_cast<string>(b));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 > str2) return a;
        else if (str1 < str2) return b;
        else return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int num = boost::any_cast<int>(a);
        string str = boost::any_cast<string>(b);
        if (num > stof(str)) return a;
        else if (num < stof(str)) return b;
        else return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        int num = boost::any_cast<int>(b);
        if (stof(str) > num) return a;
        else if (stof(str) < num) return b;
        else return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if (num1 > num2) return a;
        else if (num1 < num2) return b;
        else return boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float num = boost::any_cast<float>(a);
        int num2 = boost::any_cast<int>(b);
        if (num > num2) return a;
        else if (num < num2) return b;
        else return boost::any("None");
    }
    return a;
}