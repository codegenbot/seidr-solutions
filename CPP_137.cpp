#include <boost/any.hpp>
#include <boost/lexical_cast.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same_type<double>(a) && is_same_type<double>(b)) {
        return a > b ? a : b;
    } else if (is_same_type<std::string>(a) && is_same_type<std::string>(b)) {
        return std::lexicographical_compare(a.get<std::string>().c_str(), b.get<std::string>().c_str()) ?
               a : b;
    } else {
        try {
            double da = boost::any_cast<double>(a);
            double db = boost::any_cast<double>(b);
            if (da > db) {
                return a;
            } else if (db > da) {
                return b;
            } else {
                return any("None");
            }
        } catch (boost::bad_any_cast const & e) {
            return "None";
        }
    }
}