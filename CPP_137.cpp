#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any_cast<double>(a);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (strA > strB) return a;
        else if (strA < strB) return b;
        else return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string strA = boost::any_cast<string>(a);
        double dblB = boost::any_cast<double>(b);
        if (stod(strA) > dblB) return a;
        else if (stod(strA) < dblB) return b;
        else return boost::any("None");
    } else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double dblA = boost::any_cast<double>(a);
        string strB = boost::any_cast<string>(b);
        if (dblA > stod(strB)) return a;
        else if (dblA < stod(strB)) return b;
        else return boost::any("None");
    }
    return a;
}