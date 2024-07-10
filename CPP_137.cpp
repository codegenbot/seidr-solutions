#include <boost/any.hpp>
#include <boost/convert.hpp>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<string>(a)) {
        if (is_any_of<string>(b)) {
            return (get<string>(a) == get<string>(b)) ? any("None") : max(a, b);
        } else {
            return max(a, boost::any(get<double>(boost::convert<string, double>(b))));
        }
    } else {
        if (is_any_of<string>(b)) {
            return max(boost::any(get<double>(boost::convert<string, double>(a))), b);
        } else {
            return (get<double>(a) > get<double>(b)) ? a : ((get<double>(a) == get<double>(b))) ? any("None") : b;
        }
    }
}