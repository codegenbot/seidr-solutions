#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(boost::type_id<double>())) {
        double da = boost::any_cast<double>(a);
        double db = boost::any_cast<double>(b);
        return (da > db) ? a : ((da < db) ? b : boost::any("None"));
    } else if (is_any_of<a>(boost::type_id<std::string>())) {
        std::string sa = boost::any_cast<std::string>(a);
        std::string sb = boost::any_cast<std::string>(b);
        return (sa > sb) ? a : ((sa < sb) ? b : boost::any("None"));
    } else {
        throw "Invalid input";
    }
}