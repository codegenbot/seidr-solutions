#include <boost/any.hpp>
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<a>(double())) {
        if (is_any_of<b>(double())) {
            return (any_cast<double>(a) > any_cast<double>(b)) ? a : b;
        } else {
            double da = any_cast<double>(a);
            double db = any_cast<string>(b).find(',') != string::npos ?
                stod(any_cast<string>(b).substr(0, any_cast<string>(b).find(','))) :
                stod(any_cast<string>(b));
            return (da > db) ? a : b;
        }
    } else {
        if (is_any_of<b>(double())) {
            string sa = any_cast<string>(a);
            double db = any_cast<double>(b);
            return (stod(sa.find(',') != string::npos ?
                sa.substr(0, sa.find(',')) :
                sa) > db) ? a : b;
        } else {
            if (any_cast<string>(a) == any_cast<string>(b))
                return boost::any("None");
            return (any_cast<string>(a) > any_cast<string>(b)) ? a : b;
        }
    }
}