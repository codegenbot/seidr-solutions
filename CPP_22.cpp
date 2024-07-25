#include<vector>
#include<sstream>

bool issame(const std::any& val) {
    return val.type() == typeid(int);
}

std::vector<int> filter_integers(std::any values){
    std::vector<int> result;
    if (values.has_value() && issame(values)) {
        result.push_back(std::any_cast<int>(values));
    }
    return result;
}