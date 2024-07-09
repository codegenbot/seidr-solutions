#include <vector>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> completeCode(int n) {
    std::vector<int> result = {1, 3};
    for (int i = 2; i < n; ++i) {
        if (i % 2 == 0) {
            result.push_back(1 + i / 2);
        } else {
            result.push_back(result[i - 1] + result[i - 2] + result[i - 1]);
        }
    }
    return result;
}

int main() {
    assert(issame(completeCode(2), {1, 3, 2}));
    return 0;
}