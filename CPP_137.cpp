```cpp
#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return any_cast<float>(b) > any_cast<int>(a) ? b : boost::any("None");
    }
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = any_cast<string>(b);
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str[0] = '.';
            return str;
        } else {
            return stoi(str) > any_cast<int>(a) ? b : boost::any("None");
        }
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return any_cast<float>(a) > b ? a : boost::any("None");
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = any_cast<string>(a);
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str[0] = '.';
            return str;
        } else {
            return str > to_string(b) ? a : boost::any("None");
        }
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = any_cast<string>(b);
        size_t pos = str.find(',');
        if (pos != string::npos) {
            str[0] = '.';
            return str > a ? b : boost::any("None");
        } else {
            return str > to_string(any_cast<int>(a)) ? b : boost::any("None");
        }
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        size_t pos1 = str1.find(',');
        string str2 = any_cast<string>(b);
        size_t pos2 = str2.find(',');
        if (pos1 != string::npos && pos2 != string::npos) {
            return str2 > str1 ? b : boost::any("None");
        } else if (pos1 == string::npos && pos2 != string::npos) {
            return str2 > str1 ? b : boost::any("None");
        } else if (pos1 != string::npos && pos2 == string::npos) {
            return str1 > str2 ? a : boost::any("None");
        } else {
            return str1.compare(str2) > 0 ? a : boost::any("None");
        }
    }
    return boost::any("None");
}