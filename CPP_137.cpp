#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return max(a, b);
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (max(a, b)).cast<string>();
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int a_int = boost::any_cast<int>(a);
        int b_int = boost::any_cast<int>(b);
        if (a_int > b_int)
            return a;
        else if (a_int < b_int)
            return b;
        else
            return boost::any("None");
    } else {
        return boost::any("None");
    }
}