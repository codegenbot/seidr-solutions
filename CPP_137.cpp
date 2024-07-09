```
#include <boost/variant.hpp>
#include <string>
using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int)) {
        int intA = boost::any_cast<int>(a);
        if (b.type() == typeid(float))
            return boost::any(b);
        else if (b.type() == typeid(double))
            return boost::any(b);
        else
            return b;
    }
    else if (a.type() == typeid(float)) {
        float fltA = boost::any_cast<float>(a);
        if (b.type() == typeid(int))
            return boost::any(to_string(fltA));
        else if (b.type() == typeid(double))
            return boost::any(to_string(fltA));
        else
            return b;
    }
    else if (a.type() == typeid(double)) {
        double dblA = boost::any_cast<double>(a);
        if (b.type() == typeid(int))
            return boost::any(to_string(dblA));
        else if (b.type() == typeid(float))
            return boost::any(to_string(dblA));
        else
            return b;
    }
    else {
        string strA = boost::any_cast<string>(a);
        if (b.type() == typeid(int)) {
            int intB = boost::any_cast<int>(b);
            if(strA > to_string(intB))
                return a;
            else if(strA < to_string(intB))
                return b;
        }
        else if (b.type() == typeid(float) || b.type() == typeid(double)) {
            string strB = boost::any_cast<string>(b);
            if(strB > strA)
                return b;
            else if(strB < strA)
                return a;
        }
    }
    return a;
}