```
#include <vector>
#include <algorithm>

bool issame(float a, float b) {
    return (std::abs(a - b)) < 1e-6;
}

std::vector<float> get_positive(std::vector<float> l){
    std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}