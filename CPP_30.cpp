#include <vector>

bool issame(float a, float b) {
    return (a - b) < 1e-9;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        if (issame(num, 0.0f)) continue;
        result.push_back(num);
    }
    return result;
}