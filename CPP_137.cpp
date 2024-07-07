#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_none(a) && is_none(b)) {
        return boost::any("None");
    }

    if (!is_none(a)) {
        if (!is_none(b)) {
            if (get<double>(a) > get<double>(b))
                return a;
            else if (get<double>(a) < get<double>(b))
                return b;
            else
                return boost::any("None");
        } else {
            if (get<int>(a) > 0)
                return a;
            else
                return b;
        }
    } else {
        if (!is_none(b)) {
            if (get<int>(b) > 0)
                return b;
            else
                return a;
        } else {
            if (get<string>(a) > get<string>(b))
                return a;
            else if (get<string>(a) < get<string>(b))
                return b;
            else
                return boost::any("None");
        }
    }
}