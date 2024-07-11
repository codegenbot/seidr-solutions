#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return b;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string strA = boost::any_cast<string>(a);
        string strB = boost::any_cast<string>(b);
        if (strA.size() > strB.size()) {
            return a;
        }
        else if (strA.size() < strB.size()) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(string) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        string strA = boost::any_cast<string>(a);
        double numB = boost::any_cast<double>(b);
        return (numB > 0.0) ? a : b;
    }
    else if ((a.type() == typeid(int) || a.type() == typeid(double)) && b.type() == typeid(string)) {
        double numA = boost::any_cast<double>(a);
        string strB = boost::any_cast<string>(b);
        return (numA > 0.0) ? b : a;
    }
    else {
        return boost::any("None");
    }
}