#include <boost/any.hpp>
#include <string>
#include <vector>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same<any_type, int>(a.type()) && is_same<any_type, float>(b.type())) {
        return (float)a > (float)b ? a : b;
    }
    else if (is_same<any_type, float>(a.type()) && is_same<any_type, int>(b.type())) {
        return (float)a > (float)b ? a : b;
    }
    else if (is_same<any_type, string>(a.type()) && is_same<any_type, string>(b.type())) {
        vector<string> strs = {any_cast<string>(a), any_cast<string>(b)};
        sort(strs.begin(), strs.end());
        return strs.back();
    }
    else if (is_same<any_type, int>(a.type()) && is_same<any_type, string>(b.type())) {
        double a_val = stod(any_cast<string>(b));
        if ((int)a > a_val) {
            return a;
        }
        else if ((int)a < a_val) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (is_same<any_type, string>(a.type()) && is_same<any_type, int>(b.type())) {
        double b_val = stod(any_cast<string>(a));
        if ((int)b > b_val) {
            return b;
        }
        else if ((int)b < b_val) {
            return a;
        }
        else {
            return boost::any("None");
        }
    }
    else {
        return boost::any("None");
    }
}