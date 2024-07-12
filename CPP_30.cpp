```
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
    std::vector<float> input = {1.2f, -4.5f, 7.8f};
    std::vector<float> positiveInput = get_positive(input);
    assert(issame(get_positive(input), positiveInput));  
    return 0;
}