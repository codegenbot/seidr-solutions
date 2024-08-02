#include <vector>

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for(float num : l) {
        if(num > 0)
            result.push_back(num);
    }
    return result;
}

int main() {
    std::vector<float> a = {1, -2, 3};
    std::vector<float> b = {-4, 5, -6};
    
    bool issame = true;
    
    if(get_positive(a) != get_positive(b))
        issame = false;
    
    return !issame;
}