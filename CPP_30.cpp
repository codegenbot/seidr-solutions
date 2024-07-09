#include <vector>

bool issame(float a, float b) {
    return abs(a - b) < 1e-6;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float x : l) {
        if (x > 0) {
            result.push_back(x);
        }
    }
    return result;
}