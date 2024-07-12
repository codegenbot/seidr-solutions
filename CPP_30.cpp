```c++
#include <vector>
#include <algorithm>
#include <initializer_list>

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
    std::vector<float> input = {1.2, -4.5, 7.8};
    if (issame(get_positive(input), {})) 
        return 0; 
    return 1;
}