#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same<any_type, int>(a.type()) && is_same<any_type, double>(b.type())) {
        return b;
    } else if (is_same<any_type, double>(a.type()) && is_same<any_type, int>(b.type())) {
        return a;
    } else if (is_same<any_type, string>(a.type()) && is_same<any_type, string>(b.type())) {
        return (a.convert<string>() > b.convert<string>()) ? a : ((a.convert<string>() < b.convert<string>()) ? b : boost::any("None")));
    } else if (is_same<any_type, int>(a.type()) && is_same<any_type, string>(b.type())) {
        try {
            double da = lexical_cast<double>(lexical_cast<int>(a));
            double db = lexical_cast<double>(boost::lexical_cast<int>(b));
            return (da > db) ? a : ((da < db) ? b : boost::any("None")));
        } catch (...) {
            return boost::any("None");
        }
    } else if (is_same<any_type, string>(a.type()) && is_same<any_type, int>(b.type())) {
        try {
            double da = lexical_cast<double>(boost::lexical_cast<int>(a));
            double db = lexical_cast<double>(b);
            return (da > db) ? a : ((da < db) ? b : boost::any("None")));
        } catch (...) {
            return boost::any("None");
        }
    }

    return boost::any("None");
}