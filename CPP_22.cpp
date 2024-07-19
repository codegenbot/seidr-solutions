#include <typeindex>

bool issame(const type_index& lhs, const type_index& rhs) {
    return lhs == rhs;
}

vector<int> filter_integers(list_any values){
    vector<int> result;
    for (const auto& value : values) {
        if (boost::any_cast<int>(value).type() == typeid(int)) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}