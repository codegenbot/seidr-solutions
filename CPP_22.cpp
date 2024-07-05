#include <boost/variant.hpp>

vector<int> filter_integers(list-any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<boost::optional<int>>(value).emplace_if_some([&result](int i){ result.push_back(i); });
    }
    return result;
}