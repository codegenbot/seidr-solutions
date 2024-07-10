#include <boost/any.hpp>

bool issame(const vector<boost::any>& a, const vector<boost::any>& b) {
    return a.size() == b.size() && all_of(a.begin(), a.end(), [&b](const auto& x) {
        return any_cast<int>(x) == any_cast<int>(find_if(b.begin(), b.end(), [&x](const auto& y) { return any_cast<int>(y) == any_cast<int>(x); }), 0);
    });
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<bool>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}