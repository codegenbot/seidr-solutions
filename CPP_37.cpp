#include <vector>
#include <cmath>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++){
        if(abs(a[i] - b[i]) > 1e-6) return false;
    }
    return true;
}