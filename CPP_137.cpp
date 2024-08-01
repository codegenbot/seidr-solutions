#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_none(a) || is_none(b)) {
        return "None";
    }

    if (is_numeric(a) && is_numeric(b)) {
        double da = boost::any_cast<double>(a);
        double db = boost::any_cast<double>(b);

        if (da > db) {
            return a;
        } else if (db > da) {
            return b;
        } else {
            return "None";
        }
    }

    string sa = boost::any_cast<string>(a);
    string sb = boost::any_cast<string>(b);

    if (boost::lexical_cast<double>(sa) > boost::lexical_cast<double>(sb)) {
        return a;
    } else if (boost::lexical_cast<double>(sb) > boost::lexical_cast<double>(sa)) {
        return b;
    } else {
        return "None";
    }
}