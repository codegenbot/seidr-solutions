#include <vector>
#include <algorithm>
#include <limits>

bool issame(const std::vector<float>& a, const std::vector<float>& b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-9f) return false;
    }
    return true;
}

std::vector<int> get_positive(const std::vector<int>& l) {
    std::vector<int> result;
    for (int num : l) {
        if (num > 0) {
            result.push_back(num);
        }
    }
    return result;
}