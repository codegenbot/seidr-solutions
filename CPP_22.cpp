#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size();
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}