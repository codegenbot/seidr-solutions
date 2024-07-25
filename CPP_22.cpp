#include <boost/variant.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::apply_visitor(boost::is_integer(value), value)) {
            int i = boost::get<boost::integer>(value);
            result.push_back(i);
        }
    }
    return result;
}