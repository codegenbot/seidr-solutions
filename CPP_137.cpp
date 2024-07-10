#include <iostream>
#include <string>
#include <algorithm>
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = boost::any_cast<int>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((y > x) ? b : boost::any((boost::any_cast<int>(a) > boost::any_cast<float>(b)) ? a : b));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        return (stoi(y) > x) ? b : ((x > stoi(y)) ? a : boost::any((boost::any_cast<int>(a) > stoi(string(to_wstring(boost::any_cast<int>(a))))) ? a : b));
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float x = boost::any_cast<float>(a);
        int y = boost::any_cast<int>(b);
        return (x > y) ? a : ((y > x) ? b : boost::any((boost::any_cast<float>(a) > boost::any_cast<int>(b)) ? a : b));
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        return (stod(x) > y) ? a : ((y > stod(x)) ? b : boost::any((stod(string(to_wstring(boost::any_cast<float>(a)))) > boost::any_cast<int>(b)) ? a : b));
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string x = boost::any_cast<string>(a);
        float y = boost::any_cast<float>(b);
        return (stod(x) > y) ? a : ((y > stod(x)) ? b : boost::any((stod(string(to_wstring(boost::any_cast<int>(a)))) > boost::any_cast<float>(b)) ? a : b));
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        return (stod(x) > stod(y)) ? a : ((stod(y) > stod(x)) ? b : boost::any((stod(string(to_wstring(boost::any_cast<int>(a)))) > stod(string(to_wstring(boost::any_cast<int>(b))))) ? a : b));
    } else {
        return boost::any("Invalid input");
    }
}