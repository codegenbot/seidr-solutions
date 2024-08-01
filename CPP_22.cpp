#include <vector>
#include <boost/any.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if(boost::any_cast<optional<int>>(value).has_value()) {
            int integer = boost::any_cast<optional<int>>(value).value();
            result.push_back(integer);
        }
    }
    return result;
}