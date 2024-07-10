#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (stod(a.convert_to<string>()) > stod(b.convert_to<string>())) {
            return a;
        }
        else if (stod(a.convert_to<string>()) < stod(b.convert_to<string>())) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (get<int>(a) > get<int>(b)) {
            return a;
        }
        else if (get<int>(a) < get<int>(b)) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (get<float>(a) > get<float>(b)) {
            return a;
        }
        else if (get<float>(a) < get<float>(b)) {
            return b;
        }
        else {
            return boost::any("None");
        }
    }
    else {
        return boost::any("None");
    }
}