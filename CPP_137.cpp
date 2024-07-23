#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(a);
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);
        if (str1 > str2) {
            return a;
        } else if (str1 < str2) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(float))) {
        string str = boost::any_cast<string>(a);
        int num = boost::any_cast<int>(b);
        float fnum = boost::any_cast<float>(b);
        if (str > to_string(num)) {
            return a;
        } else if (str > to_string(fnum)) {
            return a;
        } else {
            return b;
        }
    }
    if ((a.type() == typeid(int) || a.type() == typeid(float)) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int num = boost::any_cast<int>(a);
        float fnum = boost::any_cast<float>(a);
        if (to_string(num) > str) {
            return a;
        } else if (to_string(fnum) > str) {
            return a;
        } else {
            return b;
        }
    }
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num1 = boost::any_cast<int>(a);
        int num2 = boost::any_cast<int>(b);
        if (num1 > num2) {
            return a;
        } else if (num1 < num2) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float f1 = boost::any_cast<float>(a);
        float f2 = boost::any_cast<float>(b);
        if (f1 > f2) {
            return a;
        } else if (f1 < f2) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    return boost::any();
}