#include <iostream>
#include <utility>
#include <cassert>

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return (a.first == b.first) && (a.second == b.second);
}

std::pair<int, int> eat(int x, int y, int z) {
    return std::make_pair(x + y, z);
}

int main() {
    assert(issame(eat(4, 5, 1), std::make_pair(5, 0)));
    
    return 0;
}