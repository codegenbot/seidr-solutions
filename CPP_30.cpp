```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) 
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) 
            return false;
    }
    return true; 
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for(float x : l){
        if(x > 0)
            result.push_back(x);
    }
    return result;
}

int main() {
    std::vector<float> input = {-1.2, -4.5, 7.8};
    assert(issame(get_positive(input), {7.8}) || "Assertion failed");  
    return 0;
}