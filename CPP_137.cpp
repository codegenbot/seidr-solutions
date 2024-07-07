#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/more_traits.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return b;
    }
    if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return a.convert_to<string>();
    }
    if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (a.convert_to<string>() > b.convert_to<string>()) {
            return a;
        } else if (b.convert_to<string>() > a.convert_to<string>()) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y) {
            return a;
        } else if (y > x) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        if (x > y) {
            return a;
        } else if (y > x) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    if (a.type() == typeid(float) && b.type() == typeid(int)) {
        float x = boost::any_cast<float>(a);
        int y = boost::any_cast<int>(b);
        if (x > y) {
            return a;
        } else if (y > x) {
            return b;
        } else {
            return boost::any("None");
        }
    }
    return boost::any();
}