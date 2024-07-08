```
#include <iostream>
#include <string>

using namespace std;

any compareOne(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int intA = boost::any_cast<int>(a);
        string strB = boost::any_cast<string>(b);
        return (to_string(intA) > strB) ? a : b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float fltA = boost::any_cast<float>(a);
        string strB = boost::any_cast<string>(b);
        return (to_string(fltA) > strB) ? a : b;
    }
    if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double dblA = boost::any_cast<double>(a);
        string strB = boost::any_cast<string>(b);
        return (to_string(dblA) > strB) ? a : b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = boost::any_cast<string>(a);
        int intB = boost::any_cast<int>(b);
        return (strA > to_string(intB)) ? a : b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string strA = boost::any_cast<string>(a);
        float fltB = boost::any_cast<float>(b);
        return (strA > to_string(fltB)) ? a : b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string strA = boost::any_cast<string>(a);
        double dblB = boost::any_cast<double>(b);
        return (strA > to_string(dblB)) ? a : b;
    }
    // rest of your code...
}