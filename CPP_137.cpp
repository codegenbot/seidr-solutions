#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/convert.hpp>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_any_of<string>(a)) {
        string strA = any_cast<string>(a);
        if (is_any_of<string>(b)) {
            string strB = any_cast<string>(b);
            return (stod(strA) > stod(strB)) ? a : ((stod(strA) < stod(strB)) ? b : boost::any("None"));
        } else {
            return (stod(strA) > any_cast<double>(b)) ? a : ((stod(strA) < any_cast<double>(b)) ? b : boost::any("None"));
        }
    } else if (is_any_of<string>(b)) {
        string strB = any_cast<string>(b);
        return (any_cast<double>(a) > stod(strB)) ? a : ((any_cast<double>(a) < stod(strB)) ? b : boost::any("None"));
    } else {
        if (any_cast<double>(a) > any_cast<double>(b)) {
            return a;
        } else if (any_cast<double>(a) < any_cast<double>(b)) {
            return b;
        } else {
            return boost::any("None");
        }
    }
}