#include <boost/any_cast.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        try {
            int i = boost::any_cast<int>(value);
            result.push_back(i);
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}