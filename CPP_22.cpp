#include <boost/algorithm/string.hpp>
#include <boost/any.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        if (boost::holds_alternative<boost::monostate>(value)) continue;
        if (boost::holds_alternative<int>(value)) {
            result.push_back(boost::get<int>(value));
        }
    }
    return result;
}