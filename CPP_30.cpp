#include <vector>
#include <algorithm>
#include <cmath>

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(std::abs(a[i] - b[i]) > 1e-5)
            return false;
    }
    return true;
}

std::vector<float> get_positive(std::vector<float> v) {
    std::vector<float> result;
    for(float x : v) {
        if(x > 0)
            result.push_back(x);
    }
    return result;
}