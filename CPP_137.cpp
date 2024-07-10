#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a.convert_to<int>(), b.convert_to<int>());
    } else if (a.type() == typeid(double) && b.type() == typeid(double)) {
        return max(a.convert_to<double>(), b.convert_to<double>());
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (max(a.convert_to<string>(), b.convert_to<string>()) == a.convert_to<string()))? "None" : b;
    } else if ((a.type() == typeid(int) || a.type() == typeid(double)) &&
               (b.type() == typeid(string))) {
        return max(a, boost::any(b.convert_to<double>()));
    } else if ((a.type() == typeid(string)) && (b.type() == typeid(int) || b.type() == typeid(double))) {
        return max(boost::any(a.convert_to<double>()), b);
    }
}