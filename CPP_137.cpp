#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same_type<double>(a)) {
        if (is_same_type<double>(b)) {
            return (get<double>(a) > get<double>(b)) ? a : ((get<double>(a) < get<double>(b)) ? b : boost::any("None")));
        } else if (is_same_type<string>(b)) {
            double da = get<double>(a);
            string db = boost::any_cast<string>(b);
            if (stod(db) > da) return b;
            else if (stod(db) < da) return a;
            else return boost::any("None");
        }
    } else if (is_same_type<string>(a)) {
        double da = stod(boost::any_cast<string>(a));
        if (is_same_type<double>(b)) {
            if (da > get<double>(b)) return a;
            else if (da < get<double>(b)) return b;
            else return boost::any("None");
        } else if (is_same_type<string>(b)) {
            double db = stod(boost::any_cast<string>(b));
            if (db > da) return b;
            else if (db < da) return a;
            else return boost::any("None");
        }
    }

    return a; // default return
}