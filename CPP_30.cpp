```cpp
#include <vector>
#include <cmath>

bool issame(float x, float y) {
    if (x == y) 
        return true;
    else 
        return false;
}

std::vector<float> get_positive(std::vector<float> l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}