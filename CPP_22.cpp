#include <boost/variant.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<boost::optional<int>>(value).reset()->copy_to(result);
    }
    return result;
}