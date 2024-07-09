#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/convert.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = boost::any_cast<int>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((y > x) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        if (boost::algorithm::iequals(y, "none")) {
            return a;
        }
        try {
            float z = stof(y);
            return (z > x) ? b : ((x > z) ? a : boost::any("None"));
        } catch (...) {
            return boost::any("Invalid input");
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = boost::any_cast<float>(a);
        string y = boost::any_cast<string>(b);
        try {
            float z = stof(y);
            return (z > x) ? b : ((x > z) ? a : boost::any("None"));
        } catch (...) {
            return boost::any("Invalid input");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        try {
            float z = stof(x);
            return (z > y) ? a : ((y > z) ? b : boost::any("None"));
        } catch (...) {
            return boost::any("Invalid input");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string x = boost::any_cast<string>(a);
        float y = boost::any_cast<float>(b);
        try {
            float z = stof(x);
            return (z > y) ? a : ((y > z) ? b : boost::any("None"));
        } catch (...) {
            return boost::any("Invalid input");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        try {
            float z1 = stof(x), z2 = stof(y);
            return (z1 > z2) ? a : ((z2 > z1) ? b : boost::any("None"));
        } catch (...) {
            return boost::any("Invalid input");
        }
    } else {
        return boost::any("None");
    }
}