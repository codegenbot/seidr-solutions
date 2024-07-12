#include <vector>
#include <algorithm>

bool issame(vector<float> v1, vector<float> v2) {
    if (v1.size() != v2.size())
        return false;
    for (int i = 0; i < v1.size(); i++) {
        if (abs(v1[i] - v2[i]) > 0.00001)
            return false;
    }
    return true;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float x : l) {
        if (x > 0)
            result.push_back(x);
    }
    return result;
}