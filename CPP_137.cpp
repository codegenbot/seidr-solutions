#include <boost/any.hpp>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)a > (float)b ? a : b;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)a > (int)b ? a : b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        size_t pos1 = str1.find('.');
        size_t pos2 = str2.find('.');
        if (pos1 != string::npos || pos2 != string::npos) {
            return (stod(str1) > stod(str2)) ? a : b;
        } else {
            return str1 > str2 ? a : b;
        }
    } else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        string str = any_cast<string>(a);
        size_t pos = str.find('.');
        if (pos != string::npos) {
            return a;
        } else {
            return (any_cast<int>(b) > stod(str)) ? b : a;
        }
    } else if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        boost::any temp = a;
        a = b;
        b = temp;
    }

    return boost::any_cast<string>(boost::any_cast<boost::any>(a) == boost::any_cast<boost::any>(b) ? "None" : &b);
}