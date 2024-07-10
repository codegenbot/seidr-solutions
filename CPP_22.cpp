#include <boost/any.hpp>
#include <boost/algorithm/string.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value, true)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}