#include <typeindex>

bool issame(const std::type_index& type1, const std::type_index& type2) {
    return type1 == type2;
}

vector<int> filter_integers(list_any values){
    vector<int> result;
    for (const auto& value : values) {
        if (issame(typeid(int), boost::any_cast<boost::any>(value).type())) {
            result.push_back(boost::any_cast<int>(value));
        }
    }
    return result;
}