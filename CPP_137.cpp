#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (boost::any)(b > a ? b : "None");
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (boost::any)(b > a ? b : "None");
    } else if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    } else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return boost::any(b);
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (boost::any)(b > a ? b : "None");
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (boost::any)(b > a ? b : "None");
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = to_string(a.convert_to<float>());
        return (boost::any)((boost::any(b) > boost::any(str) ? b : "None"));
    }
}