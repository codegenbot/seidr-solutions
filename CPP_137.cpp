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
        return max((int)a.convertible_to<int>(), (int)b.convertible_to<int>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max((float)a.convertible_to<float>(), (float)b.convertible_to<float>());
    }
    else {
        return boost::any("None");
    }
}