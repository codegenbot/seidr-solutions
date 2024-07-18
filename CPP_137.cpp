#include <boost/any.hpp>
#include <cassert>
#include <string>

using namespace std;

boost::any compare_one(const boost::any &a, const boost::any &b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) > boost::any_cast<int>(b)) {
            return a;
        } else if (boost::any_cast<int>(a) < boost::any_cast<int>(b)) {
            return b;
        } else {
            return string("None");
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) > boost::any_cast<float>(b)) {
            return a;
        } else if (boost::any_cast<float>(a) < boost::any_cast<float>(b)) {
            return b;
        } else {
            return string("None");
        }
    } else {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        replace(str_a.begin(), str_a.end(), ',', '.');
        replace(str_b.begin(), str_b.end(), ',', '.');
        float num_a = stof(str_a);
        float num_b = stof(str_b);
        if (num_a > num_b) {
            return a;
        } else if (num_a < num_b) {
            return b;
        } else {
            return string("None");
        }
    }
}