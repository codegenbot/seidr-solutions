#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return a < 0 ? str : (str < 0 ? a : (a > str ? a : "None"));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return max(a, b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a < b ? b : (b < a ? a : boost::any("None"));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(a, b);
    }
    else {
        return "None";
    }
}