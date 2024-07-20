#include <cassert>
#include <utility>
#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::pair<int, int> eat(int x, int y, int z) {
    return std::make_pair(y+z, x);
}

int main() {
    assert(issame(std::vector<int>{4, 5, 1}, std::vector<int>{5, 0}));
    std::cout << "Function 'issame' works correctly." << std::endl;
    return 0;
}