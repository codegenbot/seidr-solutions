```cpp
#include <vector>

bool issame(vector<float> a, vector<vector<float>> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        bool same = true;
        for(float x : a[i]) {
            bool found = false;
            for(float y : b[i]) {
                if(x == y) {
                    found = true;
                    break;
                }
            }
            if(!found) return false;
        }
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