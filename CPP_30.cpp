#include <vector>
#include <cmath>

bool issame(float x, float y) {
    return (x == y);
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