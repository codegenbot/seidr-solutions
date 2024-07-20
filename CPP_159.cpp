#include <cassert>
#include <iostream>
#include <utility>
#include <vector>

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a == b;
}

std::pair<int, int> eat(int x, int y, int z) {
    return std::make_pair(y + z, x);
}

int main() {
    assert(issame(eat(4, 5, 1), std::make_pair(5, 0)));
    std::cout << "Function 'issame' works correctly." << std::endl;
    return 0;
}