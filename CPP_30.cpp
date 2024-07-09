#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(std::abs(a[i]) != std::abs(b[i])) return false;
    }
    return true;
}

std::vector<float> get_positive(const std::vector<float>& l) {
    vector<float> result;
    for(float i : l){
        if(i > 0){
            result.push_back(i);
        }
    }
    return result;
}

int main() {
    assert(issame(get_positive({}), {}));  
    return 0;
}