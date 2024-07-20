#include <vector>
#include <cassert>

bool issame(const std::vector<int>& v1, const std::vector<int>& v2) {
    return v1 == v2;
}

std::vector<int> tri(int n) {
    std::vector<int> result;
    result.push_back(3);
    if (n == 0) {
        return result;
    }
    result.push_back(1);
    if (n == 1) {
        return result;
    }
    result.push_back(1);
    for (int i = 3; i <= n; ++i) {
        if (i % 2 == 0) {
            result.push_back(1 + i / 2);
        } else {
            result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
        }
    }
    return result;
}