#include <vector>
#include <cassert>

std::vector<float> derivative(const std::vector<float>& xs){
    std::vector<float> result;
    for(int i=1; i<xs.size(); i++){
        result.push_back(xs[i] * i);
    }
    return result;
}

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    return a == b;
}

int main() {
    std::vector<float> input = {1.0, 2.0, 3.0, 4.0};
    std::vector<float> derived = derivative(input);
    
    std::vector<float> sameInput = {1.0, 2.0, 3.0, 4.0};
    std::vector<float> differentInput = {4.0, 3.0, 2.0, 1.0};
    
    bool isSame = issame(input, sameInput);
    bool isDifferent = issame(input, differentInput);
    
    assert(issame(derived, std::vector<float>{}));
    
    return 0;
}