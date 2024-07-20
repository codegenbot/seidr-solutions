#include <cassert>
#include <utility>
#include <iostream>
#include <vector> // Include vector header

bool issame(std::pair<int, int> a, std::pair<int, int> b) {
    return a == b;
}

std::pair<int, int> eat(int x, int y, int z) {
    return std::make_pair(y + z, x);
}