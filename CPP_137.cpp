#include <stdio.h>
#include <string>
#include <algorithm>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > (int)a ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (float)b > (float)a ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (strA == "None") return "None";
        return strB > strA ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int valA = boost::any_cast<int>(a);
        string strB = boost::any_cast<string>(b);
        if (strB == "None") return "None";
        return strB > to_string(valA) ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = boost::any_cast<string>(a);
        int valB = boost::any_cast<int>(b);
        if (strA == "None") return "None";
        return strA > to_string(valB) ? a : b;
    } else {
        return "None";
    }
}