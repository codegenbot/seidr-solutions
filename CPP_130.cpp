#include <vector>
#include <cassert>
#include <iostream>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> tri(int n) {
    std::vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        if (n > 0) {
            result.push_back(1);
            if (n > 1) {
                result.push_back(2);
                for (int i = 3; i <= n; ++i) {
                    if (i % 2 == 0) {
                        result.push_back(1 + i / 2);
                    } else {
                        result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
                    }
                }
            }
        }
    }
    return result;
}

int main() {
    assert(issame(tri(1), std::vector<int>{1, 3}));
}