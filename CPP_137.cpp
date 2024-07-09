#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return max(a.convert_to<double>(), b.convert_to<double>());
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return max(a, boost::any(b.convert_to<int>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return max(a, b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double a_val = boost::any_cast<double>(a);
        string b_str = boost::any_cast<string>(b);
        if (stod(b_str) > a_val) return b;
        else if (stod(b_str) < a_val) return a;
        else return boost::any("None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        double a_val = boost::any_cast<double>(b);
        string a_str = boost::any_cast<string>(a);
        if (stod(a_str) > a_val) return a;
        else if (stod(a_str) < a_val) return b;
        else return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}