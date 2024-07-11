#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/format.hpp>

using namespace std;
boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return boost::any(b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (boost::any_cast<float>(b) > boost::any_cast<float>(a)) ? b : a;
    }
    else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
             (b.type() == typeid(string) || b.type() == typeid(wstring))) {
        return (boost::any_cast<string>(b) > boost::any_cast<string>(a)) ? b : a;
    }
    else if ((a.type() == typeid(int) && b.type() == typeid(float)) ||
             (a.type() == typeid(float) && b.type() == typeid(int))) {
        return (boost::any_cast<float>(b) > boost::any_cast<int>(a)) ? b : a;
    }
    else if ((a.type() == typeid(string) || a.type() == typeid(wstring)) &&
             (b.type() == typeid(float) || b.type() == typeid(int))) {
        return (boost::any_cast<string>(b) > boost::any_cast<int>(a)) ? b : a;
    }
    else if ((a.type() == typeid(float) && b.type() == typeid(string) || b.type() == typeid(wstring)) ||
             (a.type() == typeid(int) && b.type() == typeid(string) || b.type() == typeid(wstring))) {
        return boost::any("None");
    }
    else if ((b.type() == typeid(int) && a.type() == typeid(float)) ||
             (b.type() == typeid(float) && a.type() == typeid(int)) ||
             (b.type() == typeid(string) || b.type() == typeid(wstring)) &&
             (a.type() == typeid(float) || a.type() == typeid(int))) {
        return boost::any("None");
    }
    else {
        return boost::any("None");
    }
}