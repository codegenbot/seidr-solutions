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

int main() {
    assert(issame(std::vector<int>({1, 2, 3, 5}), std::vector<int>({-1, 2, 3, 4})) == false);
    std::cout << "Test Passed!\n";
    return 0;
}