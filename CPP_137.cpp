#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return (int)b > a.convert_to<int>() ? b : a;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str_b = boost::any_cast<string>(b);
        return stof(str_b) > a.convert_to<double>() ? b : a;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str_a = boost::any_cast<string>(a);
        string str_b = boost::any_cast<string>(b);
        return stof(str_b) > stof(str_a) ? b : a;
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        string str_b = boost::any_cast<string>(b);
        int val_a = boost::any_cast<int>(a);
        return stof(str_b) > val_a ? b : a;
    } else {
        return "None";
    }
}