#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return max(a.convert_to<int>(), b.convert_to<int>());
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return max(a.convert_to<float>(), b.convert_to<float>());
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (max(a.convert_to<string>(), b.convert_to<string())) ? b : "None";
    } else if ((a.type() == typeid(int) || a.type() == typeid(float)) &&
               (b.type() == typeid(string))) {
        return max(a.convert_to<int>(), stod(b.convert_to<string()))) ?
                boost::any(b) : "None";
    } else if ((a.type() == typeid(string)) && (b.type() == typeid(int) ||
                                                  b.type() == typeid(float))) {
        return max(stod(a.convert_to<string())), b.convert_to<int>()) ?
                boost::any(a) : "None";
    }
    return "None";
}