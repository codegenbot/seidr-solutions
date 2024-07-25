#include <boost/variant.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;

    for (const auto& value : values) {
        boost::any_cast<boost::optional<int>>(value).get_or(false) ? result.push_back(boost::any_cast<int>(value)) : nullptr;
    }

    return result;
}