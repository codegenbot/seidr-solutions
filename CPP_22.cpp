#include <boost/any.hpp>
#include <typeindex>

vector<int> filter_integers(list_any values){
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == type_index(typeid(int))) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}