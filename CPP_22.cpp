#include <boost/any_cast.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any any_value = value;
        if (boost::any_cast<double>(any_value) == boost::any_cast<double>(value)) {
            continue;
        }
        try {
            int integer_value = boost::any_cast<int>(any_value);
            result.push_back(integer_value);
        } catch (...) {}
    }
    return result;
}