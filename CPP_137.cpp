```cpp
#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return a.convert_to<int>() > boost::any_cast<float>(b) ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        return str2 > str1 ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        float f = boost::any_cast<float>(b);
        string s = boost::any_cast<string>(a);
        size_t pos = s.find('.');
        if (pos != string::npos) {
            s = s.substr(0, pos);
        }
        return f > stof(s) ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float f = boost::any_cast<float>(a);
        string s = boost::any_cast<string>(b);
        size_t pos = s.find(',');
        if (pos != string::npos) {
            s = s.substr(0, pos);
        }
        return stof(s) > f ? b : a;
    } else {
        return boost::any(a.convert_to<int>() == boost::any_cast<int>(b)) ? boost::any("None") : (boost::any_cast<float>(a) > boost::any_cast<float>(b)) ? a : b;
    }
}