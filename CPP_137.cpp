#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max((int)a.convert_to<int>(), (float)b.convert_to<float>());
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        if ((string)a.convert_to<string>() > (string)b.convert_to<string>()) {
            return a;
        } else if ((string)a.convert_to<string>() < (string)b.convert_to<string>()) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        if ((float)a.convert_to<float>() > (string)b.convert_to<string>()) {
            return a;
        } else if ((float)a.convert_to<float>() < (string)b.convert_to<string>()) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        if ((string)a.convert_to<string>() > to_string((int)b.convert_to<int>())) {
            return a;
        } else if ((string)a.convert_to<string>() < to_string((int)b.convert_to<int>())) {
            return boost::any(to_string((int)b.convert_to<int>()));
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if ((string)a.convert_to<string>() > to_string((float)b.convert_to<float>())) {
            return a;
        } else if ((string)a.convert_to<string>() < to_string((float)b.convert_to<float>())) {
            return boost::any(to_string((float)b.convert_to<float>()));
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if ((string)a.convert_to<string>() > (string)b.convert_to<string>()) {
            return a;
        } else if ((string)a.convert_to<string>() < (string)b.convert_to<string>()) {
            return b;
        } else {
            return boost::any("None");
        }
    }

    return boost::any();
}