#include <boost/any_cast.hpp>

vector<int> filter_integers(list-any values) {
    vector<int> result;

    for (const auto& value : values) {
        if (boost::any_cast<bool>(value)) {
            try {
                int x = boost::any_cast<int>(value);
                result.push_back(x);
            } catch (...) {
                // ignore non-integer values
            }
        }
    }

    return result;
}