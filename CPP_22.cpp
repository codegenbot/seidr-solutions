#include <boost/algorithm/string.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any_cast<int>(value);
    }
    return result;
}