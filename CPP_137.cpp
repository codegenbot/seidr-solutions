#include<stdio.h>
#include<string>
#include<algorithm>
#include<boost/any.hpp>
using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a > (double)b ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a > (int)b ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = any_cast<string>(a);
        string str2 = any_cast<string>(b);
        str1.erase(remove(str1.begin(), str1.end(), ','), str1.end());
        str2.erase(remove(str2.begin(), str2.end(), ','), str2.end());
        return (stod(str1) > stod(str2)) ? a : b;
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string str = any_cast<string>(a);
        str.erase(remove(str.begin(), str.end(), ','), str.end());
        return (stod(str) > any_cast<double>(b)) ? a : b;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        boost::any temp = a;
        a = b;
        b = temp;
    }
    return "None";
}