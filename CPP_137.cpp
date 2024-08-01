#include <boost/any.hpp>
#include <string>
#include <type_traits>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        if (boost::any_cast<string>(a) != boost::any_cast<string>(b)) {
            return boost::any(boost::any_cast<string>(b));
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        if (boost::any_cast<int>(a) != boost::any_cast<int>(b)) {
            return boost::any((boost::any_cast<int>(b)));
        }
        else {
            return boost::any("None");
        }
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        if (boost::any_cast<float>(a) != boost::any_cast<float>(b)) {
            return boost::any((boost::any_cast<float>(b)));
        }
        else {
            return boost::any("None");
        }
    }
    else {
        return boost::any("None");
    }
}