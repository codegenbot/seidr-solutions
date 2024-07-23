#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(float)) {
        return max(a.convert_to<int>(), b.convert_to<float>());
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (boost::any_cast<string>(b) > to_string(a.convert_to<int>()) ? boost::any_cast<string>(b) : "None");
    }
    else if (a.type() == typeid(float) && b.type() == typeid(string)) {
        string str = boost::any_cast<string>(b);
        return (str > to_string(a.convert_to<float>()) ? str : "None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (boost::any_cast<string>(a) > to_string(b.convert_to<int>()) ? boost::any_cast<string>(a) : "None");
    }
    else if (a.type() == typeid(string) && b.type() == typeid(float)) {
        string str = boost::any_cast<string>(b);
        return (str > boost::any_cast<string>(a) ? str : "None");
    }
    else if (a.type() == typeid(int) && b.type() == typeid(int)) {
        return (a.convert_to<int>() > b.convert_to<int>() ? a : b);
    }
    else if (a.type() == typeid(float) && b.type() == typeid(float)) {
        return (a.convert_to<float>() > b.convert_to<float>() ? a : b);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (boost::any_cast<string>(b) > boost::any_cast<string>(a) ? boost::any_cast<string>(b) : "None");
    }
    return "None";
}