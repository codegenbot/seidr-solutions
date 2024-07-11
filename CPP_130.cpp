#include <iostream>
#include <vector>

bool issame(const std::vector<int>& v) {
    if (v.size() < 3) {
        return false;
    }
    return (v[v.size() - 1] == v[v.size() - 2] + v[v.size() - 3]);
}

std::vector<int> tri(int n) {
    std::vector<int> result;
    if (n == 0) {
        result.push_back(0);
        return result;
    }
    result.push_back(3);
    if (n == 1) {
        return result;
    }
    result.push_back(1);
    if (n == 2) {
        return result;
    }
    result.push_back(2);
    for (int i = 3; i <= n; ++i) {
        if (i % 2 == 0) {
            result.push_back(1 + i / 2);
        } else {
            result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
        }
    }
    return result;
}