#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(std::abs(a[i] - b[i]) > 1e-9) return false;
    }
    return true;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float i : l) {
        if(i > 0)
            result.push_back(i);
    }
    return result;
}