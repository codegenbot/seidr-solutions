#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> removeDuplicates(std::vector<int>& vec) {
    std::vector<int> result;
    for (int num : vec) {
        if (!result.size() || num != result.back()) {
            result.push_back(num);
        }
    }
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(removeDuplicates({1, 2, 3, 2, 4, 3, 5}), {1, 2, 3, 4, 5}));
    return 0;
}