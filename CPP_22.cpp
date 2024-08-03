#include <boost/any.hpp>

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<bool>(value)) {
            int i = any_cast<int>(value);
            result.push_back(i);
        }
    }
    return result;