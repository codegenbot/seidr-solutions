#include <vector>

bool issame(const std::std::vector<int>& a, const std::std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> compare(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result(a.size(), 0);
    for (int i = 0; i < a.size(); ++i) {
        result[i] = a[i] - b[i];
    }
    return result;
}