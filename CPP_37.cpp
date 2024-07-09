#include <vector>

bool issame(const std::vector<float>& a, const std::vector<float>& b){
    if(a.size() != b.size())return false;
    for(int i = 0; i < a.size(); i++){
        if(std::abs(a[i] - b[i]) > 1e-9)return false;
    }
    return true;
}