#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return any_cast<int>(a) > any_cast<double>(b) ? b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return any_cast<double>(a) > stod(any_cast<string>(b)) ? b : a;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return any_cast<string>(a) > any_cast<string>(b) ? b : a;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return any_cast<int>(a) > stod(any_cast<string>(b)) ? b : a;
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return any_cast<double>(a) > any_cast<int>(b) ? b : a;
    }
    else {
        return boost::any("None");
    }
}