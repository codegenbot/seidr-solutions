#include <iostream>
#include <string>
#include <boost/any.hpp>
#include <boost/functional/hash.hpp>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<string>(a)) {
        if (is_any_of<string>(b)) {
            return (get<string>(a) > get<string>(b)) ? a : ((get<string>(a) < get<string>(b)) ? b : "None");
        } else {
            return (stod(get<string>(a)) > get<double>(b)) ? a : ((stod(get<string>(a)) < get<double>(b)) ? b : "None");
        }
    } else if (is_any_of<double>(a)) {
        if (is_any_of<double>(b)) {
            return (get<double>(a) > get<double>(b)) ? a : ((get<double>(a) < get<double>(b)) ? b : boost::any("None"));
        } else {
            return (get<double>(a) > stod(get<string>(b))) ? a : ((get<double>(a) < stod(get<string>(b))) ? b : "None");
        }
    }

    return "Invalid input";
}