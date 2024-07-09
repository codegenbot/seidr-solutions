#include <vector>
#include <algorithm>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-9) return false;
    }
    return true;
}

vector<float> get_positive(vector<float> l) {
    vector<float> positiveNumbers;
    for (float num : l) {
        if (num > 0) {
            positiveNumbers.push_back(num);
        }
    }
    return positiveNumbers;
}