#include <boost/any.hpp>
#include <string>
#include <iostream>

using namespace std;
using namespace boost;

any compare_one(any a, any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int ia = boost::any_cast<int>(a);
        double ib = boost::any_cast<double>(b);
        return ib > ia ? b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        double ia = boost::any_cast<double>(a);
        int ib = boost::any_cast<int>(b);
        return ia > ib ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string sa = boost::any_cast<string>(a);
        double sb = boost::any_cast<double>(b);
        return stod(sa) > sb ? a : b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double sa = boost::any_cast<double>(a);
        string sb = boost::any_cast<string>(b);
        return sa > stod(sb) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        if (stod(sa) > stod(sb))
            return a;
        else if (stod(sa) < stod(sb))
            return b;
        else
            return any(string("None"));
    }
    else {
        return any(string("None"));
    }
}