#include <boost/any.hpp>
#include <string>
#include <algorithm>

using namespace std;

boost::any compare_one(boost::any a, boost::any b) {
    if (is_same_type<int>(a) && is_same_type<int>(b)) {
        return max(a.get<int>(), b.get<int>());
    } else if (is_same_type<float>(a) && is_same_type<float>(b)) {
        return max(a.get<float>(), b.get<float>());
    } else if (is_same_type<string>(a) && is_same_type<string>(b)) {
        return a.get<string>() > b.get<string>() ? a : b;
    }
    return boost::any("None");
}

bool is_same_type(const boost::any& x, const boost::any& y) {
    return typeid(x.type()) == typeid(y.type());
}