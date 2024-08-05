#include <iostream>
#include <vector>
#include <cassert>

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
    assert(issame({1, 2, 3, 5}, {1, 2, 3, 5}) == true);
    assert(issame({1, 2, 3, 5}, {1, 2, 3, 4}) == false);
    std::cout << "Test Passed!\n";
    return 0;
}