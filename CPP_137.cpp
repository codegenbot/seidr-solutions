#include <boost/any.hpp>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any_cast<float>(b);
    } else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return b;
    } else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(b) == "None") {
            return boost::any("None");
        }
        return b;
    } else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return a;
    } else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(b) > boost::any_cast<string>(a)) {
            return b;
        }
        return a;
    } else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        if (boost::any_cast<string>(a) >= boost::any_cast<string>(b)) {
            return "None";
        }
        return b;
    }

    return boost::any("None");
}