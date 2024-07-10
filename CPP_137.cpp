#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<std::string>(a)) {
        if (is_any_of<std::string>(b)) {
            return (get<std::string>(a) == get<std::string>(b)) ? any("None") : max(a, b);
        } else {
            return max(a, boost::any(get<double>(b)));
        }
    } else {
        if (is_any_of<std::string>(b)) {
            return max(boost::any(get<double>(a)), b);
        } else {
            return (get<double>(a) > get<double>(b)) ? a : ((get<double>(a) == get<double>(b))) ? any("None") : b;
        }
    }
}