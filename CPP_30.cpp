#include <vector>
#include <cassert>

std::vector<float> get_positive(const std::vector<float>& l){
    std::vector<float> result;
    for(const auto &num : l){
        if(num > 0){
            result.push_back(num);
        }
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

int main(){
    assert(issame(get_positive({}), {}));
}