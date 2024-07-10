```
#include <boost/any.hpp>
#include <string>
#include <cmath>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<string>(a)) {
        if (is_any_of<string>(b)) {
            return any((get<string>(a) == get<string>(b)));
        } else {
            return max(a, boost::any(get<double>(b)));
        }
    } else {
        if (is_any_of<string>(b)) {
            return max(boost::any(get<double>(a)), b);
        } else {
            return (get<double>(a) > get<double>(b)) ? a : ((get<double>(a) == get<double>(b))) ? any(0.0) : b;
        }
    }
}