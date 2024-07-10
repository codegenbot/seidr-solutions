#include <boost/variant.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::holds_alternative<boost::int_<int>>(value)) {
            result.push_back(boost::get<boost::int_<int>>(value).which);
        }
    }
    return result;
}