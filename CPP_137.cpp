#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return b.convert_to<int>() > a.convert_to<int>() ? b : a;
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
        return b.convert_to<string>() > str1 ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float f = b.convert_to<float>();
        string s = a.convert_to<string>();
        size_t pos = s.find('.');
        if (pos != string::npos) {
            s = s.substr(0, pos);
        }
        return f > stof(s) ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = a.convert_to<float>();
        string s = b.convert_to<string>();
        size_t pos = s.find(',');
        if (pos != string::npos) {
            s = s.substr(0, pos);
        }
        return stof(s) > f ? b : a;
    } else {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        return x == y ? boost::any("None") : (x > y ? a : b);
    }
}