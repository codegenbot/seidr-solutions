#include <boost/variant.hpp>

vector<int> filter_integers(list-any values) {
    vector<int> result;
    for (auto& value : values) {
        boost::any_cast<boost::optional<int>>(value).reset();
        if (value.type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}