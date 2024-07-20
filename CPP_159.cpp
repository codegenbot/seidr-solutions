#include <cassert>
#include <utility>
#include <iostream>

bool issame(std::pair<int, int> first_pair, std::pair<int, int> second_pair) {
    return first_pair == second_pair;
}

std::pair<int, int> eat(int x, int y, int z) {
    return std::make_pair(y+z, x);
}

int main() {
    assert(issame(eat(4, 5, 1), std::make_pair(5, 0)));
    std::cout << "Function 'issame' works correctly." << std::endl;
    return 0;
}