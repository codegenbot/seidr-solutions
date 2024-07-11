#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str = to_string(b.convert_to<string>());
        int num = stoi(str);
        return (num > a.convert_to<int()) ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (a.convert_to<float>() > b.convert_to<int())) ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = a.convert_to<string>(), str2 = b.convert_to<string>();
        return (str2.compare(str1) > 0) ? b : a;
    }
    
    if (a.type() == typeid(int) || a.type() == typeid(float)) {
        if (b.type() == typeid(int) || b.type() == typeid(float)) {
            return max(a, b);
        } else {
            return "None";
        }
    } else {
        if (b.type() == typeid(string)) {
            return "None";
        } else {
            return a;
        }
    }
}