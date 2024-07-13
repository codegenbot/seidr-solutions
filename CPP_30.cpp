```
#include <vector>
#include <algorithm>

bool issame(float a, float b) {
    return (a - b) <= 1e-9;
}

vector<float> get_positive(vector<float> l) {
    vector<float> result;
    for (float num : l) {
        bool same = false;
        for (float other : l) {
            if (issame(num, other)) {
                same = true;
                break;
            }
        }
        if (!same && num > 0) {
            result.push_back(num);
        }
    }
    return result;
}