```cpp
#include <vector>
#include <algorithm>

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for(float i : l){
        if(i > 0){
            result.push_back(i);
        }
    }
    return result;
}

bool issame(const std::vector<float>& v1, const std::vector<float>& v2) {
    if(v1.size() != v2.size()) {
        return false;
    }
    for(int i = 0; i < v1.size(); i++) {
        if(std::abs(v1[i] - v2[i]) > 1e-9) {
            return false;
        }
    }
    return true;
}

int main() {
    // Your code here
}