#include <boost/lexical_cast.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value, boost::bad_any_cast{})) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}