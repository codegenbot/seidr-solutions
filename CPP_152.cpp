#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>
#include <memory>

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
    assert(issame({1, 2, 3, 5}, {1, 2, 3, 5}) == true);
    assert(issame({1, 2, 3, 5}, {1, 2, 3, 4}) == false);
    std::cout << "Tests Passed!\n";
    return 0;
}