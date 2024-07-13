#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<string>(a)) {
        if (is_any_of<string>(b)) {
            return any((string)a.get() > (string)b.get()) ? b : a;
        } else {
            string strA = (string)a.get();
            double numB = boost::any_cast<double>(b);
            return any(numB > stod(strA)) ? b : a;
        }
    } else if (is_any_of<string>(b)) {
        string strB = (string)b.get();
        double numA = boost::any_cast<double>(a);
        return any(stod(strB) > numA) ? b : a;
    } else {
        double numA = boost::any_cast<double>(a);
        double numB = boost::any_cast<double>(b);
        return any(numA > numB) ? b : (numA == numB ? a : boost::any("None"));
    }
}