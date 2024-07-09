#include <vector>
#include <cmath>

namespace util {
    bool issame(float a, float b) {
        return abs(a - b) < 0.00001;
    }
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