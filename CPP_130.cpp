#include <vector>

std::vector<int> tri(int n) {
    std::vector<int> result(n);
    for (int i = 0; i < n; ++i) {
        result[i] = i * (i + 1) / 2;
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}