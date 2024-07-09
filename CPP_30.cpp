#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    // Your implementation here
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for (float x : l) {
        if(x > 0) {
            result.push_back(x);
        }
    }
    return result;
}