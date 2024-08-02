#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return ((string)a.convert_to<string>()) > ((string)b.convert_to<string>()) ? a : b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return ((string)b.convert_to<string>()) > to_string((int)a.convert_to<int>()) ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = (string)b.convert_to<string>();
        float f = (float)a.convert_to<float>();
        return str > to_string(f) ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string str = (string)a.convert_to<string>();
        int i = (int)b.convert_to<int>();
        return str > to_string(i) ? a : boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = (string)a.convert_to<string>();
        float f = (float)b.convert_to<float>();
        return str > to_string(f) ? a : boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = (string)a.convert_to<string>(), str2 = (string)b.convert_to<string>();
        return str1 > str2 ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float f = (float)a.convert_to<float()], i = (int)b.convert_to<int>();
        return f > i ? a : boost::any(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int i = (int)a.convert_to<int>(), f = (float)b.convert_to<float>();
        return i > f ? a : boost::any(b);
    }
    return a; 
}