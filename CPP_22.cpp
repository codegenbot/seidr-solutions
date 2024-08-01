#include <boost/any.hpp>

vector<int> filter_integers(list<any> values) {
    vector<int> result;
    for (const auto& value : values) {
        if (any_cast<int>(value) != boost::none) {
            result.push_back(any_cast<int>(value));
        }
    }
    return result;