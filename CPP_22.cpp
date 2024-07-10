#include <algorithm>
#include <vector>
#include <list>
#include <boost/any.hpp>

bool issame(vector<int> a, vector<int> b) {
    return (a.size() == b.size()) && equal(a.begin(), a.end(), b.begin());
}

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value) != 0) {
            if (!result.empty() && !issame(result, {boost::any_cast<int>(value)})) {
                return {};
            }
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}