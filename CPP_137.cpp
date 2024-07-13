#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a.convert_to<int>(), b.convert_to<int>());
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return max(a.convert_to<double>(), b.convert_to<double>());
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (max(a.convert_to<string>(), b.convert_to<string())) == "None" ? boost::any("None") : max(a, b);
    } else if ((a.type() == typeid(int) && b.type() == typeid(double)) ||
               (a.type() == typeid(double) && b.type() == typeid(int))) {
        return max(a.convert_to<int>(), floor(b.convert_to<double()))) ? boost::any(to_string(max(a, b))) : boost::any("None");
    } else if ((a.type() == typeid(string) && b.type() == typeid(double)) ||
               (a.type() == typeid(double) && b.type() == typeid(string))) {
        return max(a.convert_to<string>(), to_string(b.convert_to<double()))) ? boost::any(to_string(max(a, b))) : boost::any("None");
    } else {
        return "None";
    }
}