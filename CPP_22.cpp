#include <boost/algorithm/string.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<bool>(value)) {
            try {
                int v = boost::any_cast<int>(value);
                result.push_back(v);
            } catch (...) {
                // Ignore non-integers
            }
        }
    }
    return result;
}