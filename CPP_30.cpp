#include <vector>
#include <cassert>

bool issame(vector<float> a, vector<vector<float>> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (!std::equal(a[i], a[i] + 1, b[i], [](float x, float y){return std::abs(x) == std::abs(y);})) {
            return false;
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