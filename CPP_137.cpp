#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a.convert_to<int>(), b.convert_to<int>());
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(a.convert_to<float>(), b.convert_to<float>());
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert_to<string>();
        string str2 = b.convert_to<string>();

        int num1, num2;
        bool isNum1Valid = true, isNum2Valid = true;

        size_t pos = 0;
        while ((pos = str1.find_first_of({',','.'})) != string::npos) {
            if (str1.substr(0, pos).length() > 0) {
                try {
                    num1 = stoi(str1.substr(0, pos));
                } catch (...) {
                    isNum1Valid = false;
                    break;
                }
            } else {
                isNum1Valid = false;
                break;
            }
        }

        if (isNum1Valid) {
            str1.erase(0, pos);
        }

        pos = 0;
        while ((pos = str2.find_first_of({',','.'})) != string::npos) {
            if (str2.substr(0, pos).length() > 0) {
                try {
                    num2 = stoi(str2.substr(0, pos));
                } catch (...) {
                    isNum2Valid = false;
                    break;
                }
            } else {
                isNum2Valid = false;
                break;
            }
        }

        if (isNum2Valid) {
            str2.erase(0, pos);
        }

        if (isNum1Valid && isNum2Valid) {
            return (num1 > num2 ? &str1 : &str2);
        } else if (!isNum1Valid && !isNum2Valid) {
            return "None";
        } else if (isNum1Valid) {
            return str1;
        } else {
            return str2;
        }
    }

    return "None";
}