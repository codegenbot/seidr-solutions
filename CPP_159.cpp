#include <cassert>
#include <iostream>
#include <utility>

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a.first == b.first && a.second == b.second;
}

std::pair<int, int> eat(int x, int y, int z) {
    return std::make_pair(y + z, x - z);
}

int main() {
    assert(issame(eat(4, 5, 1), std::make_pair(6, 3)));
    std::cout << "Function 'issame' works correctly." << std::endl;
    return 0;
}