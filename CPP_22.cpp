#include <boost/any.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        if (typeid(int) == value.type()) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}