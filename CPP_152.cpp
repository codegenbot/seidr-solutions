#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame({1, 2, 3, 5}, {1, 2, 3, 5}) == true);
    std::cout << "Test Passed!\n";
    return 0;
}