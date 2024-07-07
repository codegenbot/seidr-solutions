#include <any>
#include <string>
#include <algorithm>

using namespace std;

any compare_one(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a ? b : nullptr;
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = any_cast<string>(b);
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str[0] = '.';
            return str;
        } else {
            return (int)stoi(str) > a ? b : nullptr;
        }
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > b ? a : nullptr;
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = any_cast<string>(a);
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str[0] = '.';
            return str;
        } else {
            return str > to_string(b) ? a : nullptr;
        }
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = any_cast<string>(b);
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str[0] = '.';
            return str > a ? b : nullptr;
        } else {
            return str > to_string(a) ? b : nullptr;
        }
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        size_t pos1 = str1.find(',');
        string str2 = any_cast<string>(b);
        size_t pos2 = str2.find(',');
        if (pos1 != string::npos && pos2 != string::npos) {
            return str2 > str1 ? b : nullptr;
        } else if (pos1 == string::npos && pos2 != string::npos) {
            return str2 > str1 ? b : nullptr;
        } else if (pos1 != string::npos && pos2 == string::npos) {
            return str1 > str2 ? a : nullptr;
        } else {
            return str1.compare(str2) > 0 ? a : nullptr;
        }
    }
    return nullptr;
}