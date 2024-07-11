#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a.convert_to<int>() > (double)b.convert_to<double>() ? b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a.convert_to<double>() > (int)b.convert_to<int>() ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = any_cast<string>(a);
        string s2 = any_cast<string>(b);
        return s1 > s2 ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)a.convert_to<int>() > stoi(any_cast<string>(b)) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return stoi(any_cast<string>(a)) > (int)b.convert_to<int>() ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        string s = any_cast<string>(b);
        return (double)a.convert_to<double>() > (s[0] == '.' || s[0] == ',') ? 0.0 : stod(s) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string s = any_cast<string>(a);
        return (s[0] == '.' || s[0] == ',') ? 0.0 : stod(s) > (double)b.convert_to<double>() ? a : b;
    }
    
    // Return "None" if the values are equal
    return boost::any("None");
}