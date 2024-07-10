```
#include <boost/any.hpp>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any((int)b > (int)a ? b : a);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any((float)b > (float)a ? b : a);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (strA == "None") return boost::any("None");
        return boost::any(strB > strA ? b : a);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int valA = boost::any_cast<int>(a);
        string strB = boost::any_cast<string>(b);
        if (strB == "None") return boost::any("None");
        return boost::any(strB > to_string(valA) ? b : a);
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string strA = boost::any_cast<string>(a);
        int valB = boost::any_cast<int>(b);
        if (strA == "None") return boost::any("None");
        return boost::any(strA > to_string(valB) ? a : b);
    } else {
        return boost::any("None");
    }
}