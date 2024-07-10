#include <boost/any.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<double>(value, true).isNaN()) {
            try {
                int val = boost::any_cast<int>(value);
                result.push_back(val);
            } catch (...) {}
        }
    }
    return result;