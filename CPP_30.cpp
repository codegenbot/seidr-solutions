#include <vector>
#include <cassert>

bool issame(const std::std::vector<float>& a, const std::std::vector<float>& b){
    return a == b;
}

std::vector<float> get_positive(const std::vector<float>& l){
    std::vector<float> result;
    for(float num : l){
        if(num > 0){
            result.push_back(num);
        }
    }
    return result;
}

void main(){
    assert(issame(get_positive({}) , {}));
}