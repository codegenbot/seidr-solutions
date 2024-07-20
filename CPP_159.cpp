#include <cassert>
#include <utility>
#include <iostream>
#include <vector> // Add include for vector type

bool issame(std::pair<int, int> first_pair, std::pair<int, int> second_pair) {
    return first_pair == second_pair;
}

int main() {
    assert(issame(eat(4, 5, 1), std::make_pair(5, 0)));
    std::cout << "Function 'issame' works correctly." << std::endl;
    return 0;
}