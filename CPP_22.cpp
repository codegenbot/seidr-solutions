#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(const boost::any& a, const boost::any& b) {
    if (!a.type() == b.type()) return false;
    return boost::any_cast<const vector<int>&>(a) == boost::any_cast<const vector<int>&>(b);
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (is_same<list<any>, list<int>>::value || issame(value, make_any<int>(0))) {
            int val = boost::any_cast<int>(value);
            if (!val) continue;
            result.push_back(val);
        }
    }
    return result;
}