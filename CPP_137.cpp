#include <any>
#include <string>
#include <algorithm>

using namespace std;

std::any compare_one(std::any a, std::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return any_cast<float>(b) > any_cast<int>(a) ? b : "None";
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = any_cast<string>(b);
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str[0] = '.';
            return str;
        } else {
            return any_cast<int>(str) > a ? b : "None";
        }
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return any_cast<float>(a) > any_cast<int>(b) ? a : "None";
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = any_cast<string>(a);
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str[0] = '.';
            return str;
        } else {
            return str > to_string(any_cast<int>(b)) ? a : "None";
        }
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = any_cast<string>(b);
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str[0] = '.';
            return str > a ? b : "None";
        } else {
            return str > to_string(any_cast<float>(a)) ? b : "None";
        }
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        size_t pos1 = str1.find(',');
        string str2 = any_cast<string>(b);
        size_t pos2 = str2.find(',');
        if (pos1 != string::npos && pos2 != string::npos) {
            return str2 > str1 ? b : "None";
        } else if (pos1 == string::npos && pos2 != string::npos) {
            return str2 > str1 ? b : "None";
        } else if (pos1 != string::npos && pos2 == string::npos) {
            return str1 > str2 ? a : "None";
        } else {
            return str1.compare(str2) > 0 ? a : "None";
        }
    }
    return "None";
}