#include <boost/any.hpp>
#include <string>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (boost::any_cast<int>(a) > boost::any_cast<string>(b).compare(0, -1, "0123456789") >= 0) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(int)) {
        return (boost::any_cast<float>(a) > boost::any_cast<int>(b)) ? a : b;
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (boost::any_cast<string>(a) > boost::any_cast<string>(b)) ? a : b;
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return a == b ? boost::any("None") : (boost::any_cast<int>(a) > boost::any_cast<int>(b)) ? a : b;
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return boost::any_cast<float>(a) > boost::any_cast<float>(b) ? a : b;
    }

    return boost::any("None");
}