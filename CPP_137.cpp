#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = boost::any_cast<int>(a);
        int y = boost::any_cast<int>(b);
        if (x > y) return a;
        else if (x < y) return b;
        else return boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        float x = boost::any_cast<float>(a);
        float y = boost::any_cast<float>(b);
        if (x > y) return a;
        else if (x < y) return b;
        else return boost::any("None");
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string x = boost::any_cast<string>(a);
        string y = boost::any_cast<string>(b);
        if (x > y) return a;
        else if (x < y) return b;
        else return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        int x = boost::any_cast<int>(a);
        float y = boost::any_cast<float>(b);
        if (x > y) return a;
        else if (x < y) return b;
        else return boost::any("None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        int x = boost::any_cast<int>(a);
        string y = boost::any_cast<string>(b);
        if (x > lexical_cast<float>(y)) return a;
        else if (x < lexical_cast<float>(y)) return b;
        else return boost::any("None");
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        float x = boost::any_cast<float>(a);
        string y = boost::any_cast<string>(b);
        if (x > lexical_cast<float>(y)) return a;
        else if (x < lexical_cast<float>(y)) return b;
        else return boost::any("None");
    } else {
        return "Invalid input";
    }
}