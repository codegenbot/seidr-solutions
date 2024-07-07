#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return max(a.convert_to<int>(), b.convert_to<double>());
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return max(a, boost::any(b.convert_to<int>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string s1 = any_cast<string>(a);
        string s2 = any_cast<string>(b);

        double d1 = stod(s1);
        double d2 = stod(s2);

        return max(a, boost::any(max(d1, d2) == d1 ? (boost::any)s1 : (boost::any)s2));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        string s = any_cast<string>(a);
        double d = boost::any_cast<double>(b);

        return max(a, boost::any(stod(s) > d ? (boost::any)s : boost::any(to_string(d)))));
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        double d = boost::any_cast<double>(a);
        string s = any_cast<string>(b);

        return max(a, boost::any(stod(s) > d ? (boost::any)s : boost::any(to_string(d)))));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int i = boost::any_cast<int>(a);
        string s = any_cast<string>(b);

        return max(a, boost::any(stod(s) > i ? (boost::any)s : boost::any(to_string(i)))));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string s = any_cast<string>(a);
        int i = boost::any_cast<int>(b);

        return max(a, boost::any(stod(s) > i ? (boost::any)s : boost::any(to_string(i)))));
    }
    else if (a.convert_to<double>() == b.convert_to<double>()) {
        return "None";
    }

    return a;
}