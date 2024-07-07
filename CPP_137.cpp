#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        int x = any_cast<int>(a);
        int y = any_cast<int>(b);
        return any_cast<>::type(y > x ? &y : (x > y ? &x : boost::any("None")));
    } else if ((a.type() == typeid(double) || a.type() == typeid(float)) &&
               (b.type() == typeid(double) || b.type() == typeid(float))) {
        double x = any_cast<double>(a);
        double y = any_cast<double>(b);
        return any_cast<>::type(y > x ? &y : (x > y ? &x : boost::any("None")));
    } else if ((a.type() == typeid(string)) && (b.type() == typeid(string))) {
        string x = any_cast<string>(a);
        string y = any_cast<string>(b);
        return any_cast<>::type(y > x ? &y : (x > y ? &x : boost::any("None")));
    } else {
        return boost::any("Invalid input");
    }
}