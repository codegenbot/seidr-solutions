#include<vector>
#include<sstream>

bool issame(const std::any& a, const std::type_info& t) {
    return a.type() == t;
}

vector<int> filter_integers(std::any values){
    vector<int> result;
    for (const auto& val : values) {
        if (issame(val, typeid(int))) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}