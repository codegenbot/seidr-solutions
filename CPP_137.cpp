#include <boost/any.hpp>
#include <cassert>
#include <algorithm>
#include <string>

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == b.type()) {
        if (a.type() == typeid(int) && boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (a.type() == typeid(float) && boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (a.type() == typeid(string)) {
            string str_a = boost::any_cast<string>(a);
            string str_b = boost::any_cast<string>(b);
            if (str_a.find_first_of(".,") != string::npos) {
                replace(str_a.begin(), str_a.end(), ',', '.');
            }
            if (str_b.find_first_of(".,") != string::npos) {
                replace(str_b.begin(), str_b.end(), ',', '.');
            }
            if (stod(str_a) > stod(str_b)) {
                return a;
            }
        }
    }
    return b;
}