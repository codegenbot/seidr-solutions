```cpp
#include <vector>

bool issame(vector<float> a, vector<vector<float>> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        vector<float> v1 = {a[i]};
        vector<float> v2 = b[i];
        if(!std::issame(get_positive(v1), get_positive(v2))) return false;
    }
    return true;
}

vector<float> get_positive(vector<float> l){
    vector<float> result;
    for(float x : l) {
        if(x > 0) {
            result.push_back(x);
        }
    }
    return result;
}