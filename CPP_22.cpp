#include <boost/algorithm/string.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (auto& value : values) {
        if (boost::get<boost::any_cast<int>>(value)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}