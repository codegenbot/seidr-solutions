#include <iostream>
#include <vector>
#include <cassert>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(std::vector<int>({1, 2, 3, 5}), std::vector<int>({-1, 2, 3, 4})) == false);
    std::cout << "Test Passed!\n";
    return 0;
}