#include <boost/lexical_cast.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<double>(value) == boost::any_cast<double>(boost::any_cast<boost::any>(value))) {
            continue;
        }
        try {
            int val = boost::lexical_cast<int>(value);
            result.push_back(val);
        } catch (...) {
            // ignore non-integer values
        }
    }
    return result;
}