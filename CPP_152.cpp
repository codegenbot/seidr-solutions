#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> compare(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    result.resize(a.size());
    for (int i = 0; i < a.size(); i++) {
        result[i] = (a[i] == b[i]) ? 1 : 0;
    }
    return result;
}

int main() {
    assert(issame(std::vector<int>({1, 2, 3, 5}), std::vector<int>({-1, 2, 3, 4})) == false);
    assert(issame(compare(std::vector<int>({1, 2, 3, 5}), std::vector<int>({-1, 2, 3, 4})), std::vector<int>({0, 1, 1, 0}));
    std::cout << "Tests Passed!" << std::endl;
    return 0;
}