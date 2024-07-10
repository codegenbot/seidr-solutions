#include <string>
#include <algorithm>
#include <boost/any.hpp>
#include <boost/multi_array.hpp>

using namespace std;
using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_numeric(a) && is_numeric(b)) {
        double da = get<double>(a);
        double db = get<double>(b);

        return make_any((da > db) ? a : b);
    } else if (!is_numeric(a) && !is_numeric(b)) {
        string sa = get<string>(a);
        string sb = get<string>(b);

        return make_any((sa > sb) ? a : b);
    } else {
        return make_any("None");
    }
}

bool is_numeric(boost::any a) {
    try {
        get<double>(a);
        return true;
    } catch (...) {
        return false;
    }
}