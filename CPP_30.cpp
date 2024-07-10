```
#include <vector>
#include <algorithm>

bool isSame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-9) {
            return false;
        }
    }
    return true;
}

bool isSame(vector<float> l, float num) {
    for (float x : l) {
        if (x == num) {
            return true;
        }
    }
    return false;
}