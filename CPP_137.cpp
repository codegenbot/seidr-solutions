#include <boost/any.hpp>

using namespace boost;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_pointer(&a)) {
        int *ia = &a.get<int>();
        int *ib = &b.get<int>();
        return (ia > ib) ? a : ((ia < ib) ? b : boost::any("None")));
    } else if (is_pointer(&b)) {
        int *ib = &b.get<int>();
        int *ia = &a.get<int>();
        return (ia > ib) ? a : ((ia < ib) ? b : boost::any("None")));
    } else if (is_float(a) || is_float(b)) {
        float fa = a.get<float>();
        float fb = b.get<float>();
        return (fa > fb) ? a : ((fa < fb) ? b : boost::any("None")));
    } else {
        string sa = a.get<string>();
        string sb = b.get<string>();
        return (sa > sb) ? a : ((sa < sb) ? b : boost::any("None")));
    }
}