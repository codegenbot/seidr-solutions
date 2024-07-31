#include <vector>
#include <cassert>

bool issame(std::std::vector<float> a, std::std::vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

std::std::vector<float> get_positive(std::std::vector<float> l) {
    std::std::vector<float> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}