#include <boost/variant.hpp>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    using namespace boost;
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
        if(strA > strB) return a;
        if(strA < strB) return b;
    }
    if ((a.type() == typeid(int) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(int))) {
        int intB = boost::any_cast<int>(b);
        string strA = boost::any_cast<string>(a);
        if(strA > to_string(intB)) return a;
        if(strA < to_string(intB)) return b;
    }
    if ((a.type() == typeid(float) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(float))) {
        float fltA = boost::any_cast<float>(a);
        string strB = boost::any_cast<string>(b);
        if(strB > to_string(fltA)) return b;
        if(strB < to_string(fltA)) return a;
    }
    if ((a.type() == typeid(double) && b.type() == typeid(string)) || (a.type() == typeid(string) && b.type() == typeid(double))) {
        double dblA = boost::any_cast<double>(a);
        string strB = boost::any_cast<string>(b);
        if(strB > to_string(dblA)) return b;
        if(strB < to_string(dblA)) return a;
    }
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        int intB = boost::any_cast<int>(b);
        if(intA > intB) return a;
        if(intA < intB) return b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float fltA = boost::any_cast<float>(a);
        float fltB = boost::any_cast<float>(b);
        if(fltA > fltB) return a;
        if(fltA < fltB) return b;
    }
    if (a.type() == typeid(double) && b.type() ==typeid(double)) {
        double dblA = boost::any_cast<double>(a);
        double dblB = boost::any_cast<double>(b);
        if(dblA > dblB) return a;
        if(dblA < dblB) return b;
    }
    return a;
}