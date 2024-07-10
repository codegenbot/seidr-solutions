#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
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

std::vector<int> common(std::vector<int> v1, std::vector<int> v2) {
    std::vector<int> result;
    for (int i : v1) {
        for (int j : v2) {
            if (i == j) {
                result.push_back(i);
                break;
            }
        }
    }
    return result;
}