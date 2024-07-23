#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any_cast<double>(b);
    } else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        string str1 = boost::any_cast<string>(a);
        string str2 = boost::any_cast<string>(b);

        if (str1 == "None" || str2 == "None") {
            return a;
        } else if (stod(str1) > stod(str2)) {
            return a;
        } else if (stod(str1) < stod(str2)) {
            return b;
        } else {
            return boost::any("None");
        }
    } else if (a.type() == typeid(string) && b.type() != typeid(string)) {
        string str = boost::any_cast<string>(a);
        if (str == "None") {
            return a;
        } else {
            return b;
        }
    } else if (b.type() == typeid(string) && a.type() != typeid(string)) {
        string str = boost::any_cast<string>(b);
        if (str == "None") {
            return b;
        } else {
            return a;
        }
    }

    return boost::any("None");
}