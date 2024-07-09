#include <vector>
#include <algorithm>

bool issame(vector<float> a, vector<float> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if ((a[i] > 0 && !std::count(b.begin(), b.end(), a[i])) ||
            (a[i] <= 0 && std::count(b.begin(), b.end(), a[i]) != 1)) {
            return false;
        }
    }
    return true;
}