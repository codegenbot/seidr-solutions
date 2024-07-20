#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> compare(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result;
    for (size_t i = 0; i < a.size(); ++i) {
        result.push_back(a[i] - b[i]);
    }
    return result;
}