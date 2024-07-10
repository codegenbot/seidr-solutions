#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a.convert_to<int>(), b.convert_to<int>());
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(a.convert_to<float>(), b.convert_to<float>());
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (max(a.convert_to<string>(), b.convert_to<string>()) == a.convert_to<string()())) ? "None" : a;
    } else if ((a.type() == typeid(int) && b.type() == typeid(float)) ||
               (a.type() == typeid(float) && b.type() == typeid(int))) {
        return max(a, b);
    } else if ((a.type() == typeid(string) && b.type() == typeid(float)) ||
               (a.type() == typeid(float) && b.type() == typeid(string))) {
        string str1 = a.convert_to<string>();
        double num2 = boost::any_cast<double>(b);
        return (num2 > boost::any_cast<double>(str1)) ? boost::any(str1) : (num2 < boost::any_cast<double>(str1)) ? boost::any("None") : b;
    } else {
        return "None";
    }
}