#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.cast<int>(), b.cast<float>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string s = to_string(b.cast<string>());
        return a.cast<float>() > stod(s) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return a.cast<string>() > b.cast<string>() ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a.cast<int>(), b.cast<int>());
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return a.cast<float>() > b.cast<float>() ? a : b;
    }
    else {
        return boost::any("None");
    }
}