#include <boost/any.hpp>
#include <string>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (any_cast<int>(a) < any_cast<int>(b)) return b;
    else if (any_cast<int>(a) > any_cast<int>(b)) return a;
    else if (any_cast<double>(a) < any_cast<double>(b)) return b;
    else if (any_cast<double>(a) > any_cast<double>(b)) return a;
    else return "None";
}