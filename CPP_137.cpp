#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convertible_to<int>(), (float)b.convertible_to<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return max((float)a.convertible_to<float>(), (string)b.convertible_to<string>());
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (max(a.convertible_to<string>(), b.convertible_to<string>()) == a ? a : b);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (a.convertible_to<int>() > b.convertible_to<int>() ? a : (b.convertible_to<int>() > a.convertible_to<int>() ? b : boost::any("None")));
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (a.convertible_to<float>() > b.convertible_to<float>() ? a : (b.convertible_to<float>() > a.convertible_to<float>() ? b : boost::any("None")));
    }
    else {
        return boost::any("None");
    }
}