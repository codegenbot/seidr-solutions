#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        int ia = boost::any_cast<int>(a);
        double ib = boost::any_cast<double>(b);
        return any(ia < ib ? b : a);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        double ia = boost::any_cast<double>(a);
        int ib = boost::any_cast<int>(b);
        return any(ia < ib ? b : a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string sa = boost::any_cast<string>(a);
        double sb = boost::any_cast<double>(b);
        return any(stod(sa) < sb ? b : a);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double sa = boost::any_cast<double>(a);
        string sb = boost::any_cast<string>(b);
        return any(sa < stod(sb) ? b : a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string sa = boost::any_cast<string>(a);
        string sb = boost::any_cast<string>(b);
        if (stod(sa) < stod(sb))
            return b;
        else if (stod(sa) > stod(sb))
            return a;
        else
            return any("None");
    }
    else {
        return any("None");
    }
}