```
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return ((int)b > (int)a) ? b : a;
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str[0] = '.';
            return str;
        } else {
            int num = stoi(str);
            return ((int)num > (int)a) ? b : a;
        }
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return ((float)a > (int)b) ? a : b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = boost::any_cast<string>(a);
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str[0] = '.';
            return str;
        } else {
            int num = stoi(str);
            return ((int)num > (int)b) ? a : b;
        }
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(b);
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str[0] = '.';
            return str > a ? b : a;
        } else {
            float num = stof(str);
            return ((float)a > num) ? a : b;
        }
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        size_t pos1 = str1.find(',');
        size_t pos2 = str2.find(',');
        if (pos1 != string::npos && pos2 != string::npos) {
            return str2 > str1 ? b : a;
        } else if (pos1 == string::npos && pos2 != string::npos) {
            return str2 > str1 ? b : a;
        } else if (pos1 != string::npos && pos2 == string::npos) {
            return str1 > str2 ? a : b;
        } else {
            return str1.compare(str2) > 0 ? a : b;
        }
    }
    return "None";
}