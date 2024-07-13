#include <vector>
#include <algorithm>

bool issame(float x, float y) {
    return (x - y) < 1e-9;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float x : l) {
        if (x > 0)
            result.push_back(x);
    }
    sort(result.begin(), result.end());
    return result;
}