#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (int)a > (int)b ? a : (int)b.type();
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (float)a > (float)b ? a : (boost::any)0.0;
    } else if ((a.type() == typeid(string) || a.type() == typeid(wchar_t)) &&
               (b.type() == typeid(string) || b.type() == typeid(wchar_t))) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return strA > strB ? a : (boost::any)"None";
    } else if ((a.type() == typeid(int) || a.type() == typeid(float)) &&
               (b.type() == typeid(string) || b.type() == typeid(wchar_t))) {
        double numA = boost::any_cast<double>(a);
        string strB = boost::any_cast<string>(b);
        if (numA > stod(strB))
            return a;
        else
            return b;
    } else {
        return boost::any("None");
    }
}