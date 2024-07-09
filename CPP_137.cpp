#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return boost::any((int)a.cast_to<int>() > (double)b.cast_to<double>() ? b : a);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return boost::any((double)a.cast_to<double>() > stod(b.cast_to<string>()) ? b : a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any(a.cast_to<string>() > b.cast_to<string>() ? b : a);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return boost::any((int)a.cast_to<int>() > stod(b.cast_to<string>()) ? b : a);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return boost::any((double)a.cast_to<double>() > (int)b.cast_to<int>() ? b : a);
    }
    else {
        return boost::any("None");
    }
}