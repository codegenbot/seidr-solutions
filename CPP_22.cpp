#include <vector>
#include <any>

std::vector<int> filter_integers(std::vector<std::any_view> values){
    std::vector<int> result;
    for (const auto &val : values) {
        if (val.type() == typeid(int)) {
            result.push_back(std::any_cast<int>(val));
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b){
    if(a.size() != b.size()) return false;
    
    for(size_t i = 0; i < a.size(); ++i){
        if(a[i] != b[i]) return false;
    }

    return true;
}