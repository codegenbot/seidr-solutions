#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same<any_type, int>(a.type()) && is_same<any_type, float>(b.type())) {
        return b;
    } else if (is_same<any_type, float>(a.type()) && is_same<any_type, string>(b.type())) {
        return b;
    } else if (is_same<any_type, string>(a.type()) && is_same<any_type, int>(b.type())) {
        return a;
    } else if (is_same<any_type, string>(a.type()) && is_same<any_type, float>(b.type())) {
        return (boost::any_cast<string>(a) > boost::any_cast<string>(b)) ? a : b;
    } else if (is_same<any_type, int>(a.type()) && is_same<any_type, int>(b.type())) {
        return (boost::any_cast<int>(a) > boost::any_cast<int>(b)) ? a : b;
    }
    return "None";
}