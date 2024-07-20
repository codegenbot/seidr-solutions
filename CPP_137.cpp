#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return max(a.convert_to<float>(), b.convert_to<int>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert_to<string>();
        string str2 = b.convert_to<string>();

        int num1 = 0, num2 = 0;
        bool decimal1 = false, decimal2 = false;

        for (int i = 0; i < str1.length(); i++) {
            if (!decimal1 && !isdigit(str1[i])) {
                decimal1 = true;
                continue;
            }
            else if (str1[i] == '.') {
                decimal1 = true;
                continue;
            }
            num1 = num1 * 10 + (str1[i] - '0');
        }

        for (int i = 0; i < str2.length(); i++) {
            if (!decimal2 && !isdigit(str2[i])) {
                decimal2 = true;
                continue;
            }
            else if (str2[i] == '.') {
                decimal2 = true;
                continue;
            }
            num2 = num2 * 10 + (str2[i] - '0');
        }

        if (!decimal1 && !decimal2) {
            return str1 > str2 ? a : b;
        }
        else if (decimal1 && decimal2) {
            return str1 > str2 ? a : b;
        }
        else if (!decimal1 && decimal2) {
            return num1 > num2 ? a : b;
        }
        else {
            return num1 < num2 ? a : b;
        }
    }
    else {
        int a_int = a.convert_to<int>();
        int b_int = b.convert_to<int>();

        if (a_int == b_int) {
            return boost::any("None");
        }

        return a_int > b_int ? a : b;
    }
}