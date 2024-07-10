#include <boost/variant.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<boost::optional<int>>(value).emplace();
        if (boost::any_cast<boost::optional<int>>(value)) {
            result.push_back(*boost::any_cast<boost::optional<int>>(value));
        }
    }
    return result;
}