#include <iostream>
#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convertible_to<int>(), (float)b.convertible_to<float>());
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return (string)b;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (max((string)a, (string)b));
    } else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (a.convertible_to<int>() > b.convertible_to<int>()) ? a : ((a.convertible_to<int>() < b.convertible_to<int>()) ? b : boost::any("None"));
    }
    return boost::any("None");
}