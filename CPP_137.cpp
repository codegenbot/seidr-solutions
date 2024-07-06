```cpp
#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        int f = a.convert_to<int>();
        float g = b.convert_to<float>();
        return boost::any(f > g ? a : b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert_to<string>();
        string str2 = b.convert_to<string>();
        size_t pos = str1.find('.');
        if (pos != string::npos) {
            str1 = str1.substr(0, pos);
        }
        pos = str2.find(',');
        if (pos != string::npos) {
            str2 = str2.substr(0, pos);
        }
        return boost::any(str2 > str1 ? b : a);
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float f = b.convert_to<float>();
        string s = a.convert_to<string>();
        size_t pos = s.find('.');
        if (pos != string::npos) {
            s = s.substr(0, pos);
        }
        return boost::any(stof(s) > f ? b : a);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = a.convert_to<float>();
        string s = b.convert_to<string>();
        size_t pos = s.find(',');
        if (pos != string::npos) {
            s = s.substr(0, pos);
        }
        return boost::any(stof(s) > f ? b : a);
    } else {
        int f1 = a.convert_to<int>();
        int f2 = b.convert_to<int>();
        float f3 = a.convert_to<float>();
        float f4 = b.convert_to<float>();
        if (f1 == f2) {
            return boost::any("None");
        } else if (f3 > f4) {
            return a;
        } else {
            return b;
        }
    }
}