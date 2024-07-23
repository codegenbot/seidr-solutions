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

        int num1 = 0;
        int num2 = 0;

        bool dotFound = false;
        for (char c : str1) {
            if (!dotFound && !isdigit(c)) {
                continue;
            }
            else if (!dotFound) {
                dotFound = true;
                continue;
            }
            num1 = num1 * 10 + (c - '0');
        }

        dotFound = false;
        for (char c : str2) {
            if (!dotFound && !isdigit(c)) {
                continue;
            }
            else if (!dotFound) {
                dotFound = true;
                continue;
            }
            num2 = num2 * 10 + (c - '0');
        }

        return (num1 > num2) ? a : ((num1 < num2) ? b : boost::any("None"));
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        string str = a.convert_to<string>();

        int num = 0;
        bool dotFound = false;
        for (char c : str) {
            if (!dotFound && !isdigit(c)) {
                continue;
            }
            else if (!dotFound) {
                dotFound = true;
                continue;
            }
            num = num * 10 + (c - '0');
        }

        return (boost::any(b).convert_to<int>() > num) ? b : ((boost::any(b).convert_to<int>() < num) ? a : boost::any("None"));
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        return (compare_one(b, a)).type() == typeid(string) ? b : a;
    }

    return boost::any("None");
}