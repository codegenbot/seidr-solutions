#include <vector>

bool issame(float a, float b) {
    if (a == b)
        return true;
    else
        return false;
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