```cpp
#include <boost/config.hpp>
#include <string>
#include <algorithm>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return (int)a.cast_to<int>() > (double)b.cast_to<double>() ? boost::any(b) : boost::any(a);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return (double)a.cast_to<double>() > stod(boost::any_cast<string>(b)) ? boost::any(b) : boost::any(a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return boost::any_cast<string>(a) > boost::any_cast<string>(b) ? boost::any(b) : boost::any(a);
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (int)a.cast_to<int>() > stod(boost::any_cast<string>(b)) ? boost::any(b) : boost::any(a);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return (double)a.cast_to<double>() > (int)b.cast_to<int>() ? boost::any(b) : boost::any(a);
    }
    else {
        return boost::any("None");
    }
}