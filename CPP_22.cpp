#include <boost/any.hpp>
#include <boost/algorithm/string.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        if (boost::holds_alternative<boost::int_<int>>(value)) {
            result.push_back(boost::get<boost::int_<int>>(value).get());
        }
    }
    return result;
}