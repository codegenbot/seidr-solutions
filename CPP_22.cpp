#include <boost/any.hpp>
#include <list>
#include <vector>
#include <typeindex>

bool issame(const boost::any& a1, const boost::any& a2) {
    if (!a1.type() == a2.type()) return false;
    if (a1.type() != typeid(int)) return true; // not int
    auto i1 = boost::any_cast<int>(a1);
    auto i2 = boost::any_cast<int>(a2);
    return *i1 == *i2;
}

vector<int> filter_integers(list<boost::any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (issame(value, value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}