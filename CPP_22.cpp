#include <boost/any.hpp>
#include <vector>
#include <list>

bool issame(const boost::any& a1, const boost::any& a2) {
    if (!a1.type() == a2.type()) return false;
    try {
        int i1 = boost::any_cast<int>(a1);
        int i2 = boost::any_cast<int>(a2);
        return i1 == i2;
    } catch (const boost::bad_any_cast& e) {
        return false;
    }
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (issame(value, value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}