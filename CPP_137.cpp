#include <string>
#include <algorithm>
#include <limits>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = boost::any_cast<int>(a);
        float y = boost::any_cast<float>(b);
        return (x > y) ? a : ((y > x) ? b : boost::any("None"));
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        if (boost::algorithm::istoi(y).good()) {
            float z = stof(y);
            return (x > z) ? a : ((z > x) ? b : boost::any("None"));
        } else {
            return boost::any("Invalid input");
        }
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = boost::any_cast<float>(a);
        string y = boost::any_cast<string>(b);
        if (boost::algorithm::istoi(y).good()) {
            return (x > stof(y)) ? a : ((stof(y) > x) ? b : boost::any("None"));
        } else {
            return boost::any("Invalid input");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        string x = boost::any_cast<string>(a);
        int y = boost::any_cast<int>(b);
        if (boost::algorithm::istoi(x).good()) {
            return (stof(x) > y) ? a : ((y > stof(x)) ? b : boost::any("None"));
        } else {
            return boost::any("Invalid input");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string x = boost::any_cast<string>(a);
        float y = boost::any_cast<float>(b);
        if (boost::algorithm::istoi(x).good()) {
            return (stof(x) > y) ? a : ((y > stof(x)) ? b : boost::any("None"));
        } else {
            return boost::any("Invalid input");
        }
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        if (boost::algorithm::istoi(x).good() && boost::algorithm::istoi(y).good()) {
            return (stof(x) > stof(y)) ? a : ((stof(y) > stof(x)) ? b : boost::any("None"));
        } else {
            return boost::any("Invalid input");
        }
    } else {
        return boost::any("None");
    }
}