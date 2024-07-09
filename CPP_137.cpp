#include <boost/variant.hpp>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(double)) {
        return b;
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        return (strA > strB) ? a : ((strA < strB) ? b : b);
    }
    if ((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))) {
        int intB = boost::any_cast<int>(b);
        string strA = boost::any_cast<string>(boost::any_cast<int>(a));
        return (strA > to_string(intB)) ? a : ((strA < to_string(intB)) ? b : b);
    }
    if ((a.type() == typeid(float) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(float))) {
        float fltA = boost::any_cast<float>(a);
        string strB = boost::any_cast<string>(b);
        return (strB > to_string(fltA)) ? b : ((strB < to_string(fltA)) ? a : b);
    }
    if ((a.type() == typeid(double) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(double))) {
        double dblA = boost::any_cast<double>(a);
        string strB = boost::any_cast<string>(b);
        return (strB > to_string(dblA)) ? b : ((strB < to_string(dblA)) ? a : b);
    }
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        return (intA > intB) ? a : ((intA < intB) ? b : b);
    }
    if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float fltA = boost::any_cast<float>(a);
        float fltB = boost::any_cast<float>(b);
        return (fltA > fltB) ? a : ((fltA < fltB) ? b : b);
    }
    if (a.type() == typeid(double) && b.type() == typeid(double)) {
        double dblA = boost::any_cast<double>(a);
        double dblB = boost::any_cast<double>(b);
        return (dblA > dblB) ? a : ((dblA < dblB) ? b : b);
    }
    return a;
}