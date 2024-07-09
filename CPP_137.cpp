#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a.convert_to<float>(), b.convert_to<int>());
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert_to<string>();
        string str2 = b.convert_to<string>();

        int num1, num2;
        bool isNum1Valid = true, isNum2Valid = true;

        for (int i = 0; i < str1.length(); ++i) {
            if (!isdigit(str1[i])) {
                isNum1Valid = false;
                break;
            }
        }

        for (int i = 0; i < str2.length(); ++i) {
            if (!isdigit(str2[i])) {
                isNum2Valid = false;
                break;
            }
        }

        if (isNum1Valid && isNum2Valid) {
            num1 = stoi(str1);
            num2 = stoi(str2);

            return (num1 > num2) ? str1 : ((num1 < num2) ? str2 : boost::any("None"));
        } else {
            return max(a, b);
        }
    }

    return boost::any("None");
}