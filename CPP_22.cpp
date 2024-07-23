#include <vector>
#include <boost/any.hpp>
#include <list_any.hpp>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).good()) {
            if (!issame(result, {boost::any_cast<int>(value)})) {
                result.push_back(boost::any_cast<int>(value));
            }
        }
    }
    return result;
}