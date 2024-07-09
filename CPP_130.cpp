#include <vector>
#include <cassert>
#include <iostream>

std::vector<int> tri(int n) {
    std::vector<int> result;
    if (n >= 0) {
        result.push_back(3);
        for (int i = 1; i <= n; ++i) {
            if (i % 2 == 0) {
                result.push_back(1 + i / 2);
            } else {
                result.push_back(result[i - 1] + result[i - 2] + result[i - 3]);
            }
        }
    }
    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> expected = {1, 3};
    std::vector<int> result = tri(1);

    if (issame(result, expected)) {
        std::cout << "Test Passed\n";
    } else {
        std::cout << "Test Failed\n";
    }

    return 0;
}