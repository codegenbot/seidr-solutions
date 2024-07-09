#include <boost/any.hpp>

vector<int> filter_integers(list_any values) {
    vector<int> result;
    for (const auto& value : values) {
        boost::any any_value = value;
        if (any_value.type() == typeid(int)) {
            result.push_back(any_value.convert<int>());
        }
    }
    return result;
}