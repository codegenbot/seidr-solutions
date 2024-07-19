#include <algorithm>
#include <vector>

bool issame(std::vector<float> a, std::vector<float> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> get_positive(std::vector<float> l) {
    std::vector<int> result;
    for (float num : l) {
        if (num > 0) {
            result.push_back(static_cast<int>(num));
        }
    }
    return result;
}