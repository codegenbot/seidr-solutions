#include <vector>
#include <cmath>

bool isSame(std::vector<float> a, std::vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(abs(a[i] - b[i]) > 1e-5f) return false;
    }
    return true;