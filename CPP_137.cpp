#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        int x;
        if (sscanf(str.c_str(), "%f", &x) != 1) {
            return a < b ? b : "None";
        } else {
            return a > x ? a : (a == x ? "None" : b);
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a), strB = boost::any_cast<string>(b);
        return strA > strB ? a : (strA < strB ? b : "None");
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a), y = boost::any_cast<int>(b);
        return x > y ? a : (x < y ? b : "None");
    }
    return "None";
}