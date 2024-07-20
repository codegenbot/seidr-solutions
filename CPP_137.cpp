#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<string>(a)) {
        string strA = any_cast<string>(a);
        if (is_any_of<string>(b)) {
            string strB = any_cast<string>(b);
            return (stod(strA) > stod(strB)) ? a : ((stod(strA) < stod(strB)) ? b : boost::any("None"));
        } else {
            double numB = any_cast<double>(b);
            return (stod(strA) > numB) ? a : ((stod(strA) < numB) ? b : boost::any("None"));
        }
    } else if (is_any_of<string>(b)) {
        string strB = any_cast<string>(b);
        double numA = any_cast<double>(a);
        return (numA > stod(strB)) ? a : ((numA < stod(strB)) ? b : boost::any("None"));
    } else {
        double numA = any_cast<double>(a);
        double numB = any_cast<double>(b);
        return (numA > numB) ? a : ((numA < numB) ? b : boost::any("None"));
    }
}