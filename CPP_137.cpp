#include <string>
#include <boost/any.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (a.type() == typeid(int) && b.type() == typeid(double)) {
        return max(a.convert_to<double>(), b.convert_to<double>());
    }
    else if (a.type() == typeid(double) && b.type() == typeid(int)) {
        return max(a, boost::any(b.convert_to<int>()));
    }
    else if (a.type() == typeid(string) && b.type() == typeid(double)) {
        return (boost::any_cast<string>(a) != "None" ? a : b);
    }
    else if (a.type() == typeid(double) && b.type() == typeid(string)) {
        return (boost::any_cast<string>(b) != "None" ? b : a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(string)) {
        return (boost::any_cast<string>(a) > boost::any_cast<string>(b) ? a : (boost::any_cast<string>(a) < boost::any_cast<string>(b) ? b : "None"));
    }
    else if (a.type() == typeid(int) && b.type() == typeid(string)) {
        return (boost::any_cast<string>(b) != "None" ? b : a);
    }
    else if (a.type() == typeid(string) && b.type() == typeid(int)) {
        return (boost::any_cast<string>(a) != "None" ? a : boost::any(b));
    }

    return "None";
}