#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<std::int32_t> make_a_pile(int n) {
    std::vector<std::int32_t> pile;
    int numStones = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            numStones += 2;
        } else {
            numStones += 1;
        }
        pile.push_back(numStones);
    }
    return pile;
}