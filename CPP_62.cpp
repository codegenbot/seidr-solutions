#include <vector>
#include <cassert>

bool is_same(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

std::vector<float> derivative(const std::vector<float>& xs){
    if (xs.size() < 2) {
        return {};
    }
    
    std::vector<float> result;
    for(size_t i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

int main(){
    assert(is_same(derivative({1}), {}));
    return 0;
}