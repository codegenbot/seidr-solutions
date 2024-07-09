#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        if (str_a > str_b) {
            return a;
        } else if (str_a < str_b) {
            return b;
        } else {
            return any("None");
        }
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int num_a = boost::any_cast<int>(a);
        int num_b = boost::any_cast<int>(b);
        if (num_a > num_b) {
            return a;
        } else if (num_a < num_b) {
            return b;
        } else {
            return any("None");
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float flt_a = boost::any_cast<float>(a);
        int num_b = boost::any_cast<int>(b);
        if (flt_a > num_b) {
            return a;
        } else if (flt_a < num_b) {
            return b;
        } else {
            return any("None");
        }
    }

    return a;
}