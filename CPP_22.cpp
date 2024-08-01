#include <boost/any.hpp>

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<bool>(value)) {
            int integer_value = any_cast<int>(value);
            result.push_back(integer_value);
        }
    }
    return result;