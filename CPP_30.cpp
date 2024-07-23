#include <vector>
#include <algorithm>

std::vector<float> getPositive(const std::vector<float>& l) {
    std::vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}

bool issame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) {
        return false;
    }
    
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}