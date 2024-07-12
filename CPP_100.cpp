#include <vector>
#include <cassert>
#include <initializer_list>

bool std::operator==(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> std::make_a_pile(int n) {
    std::vector<int> pile;
    int stones = n;
    for (int i = 0; i < n; i++) {
        if (stones % 2 == 1) {
            pile.push_back(stones);
            stones += 2;
        } else {
            pile.push_back(stones);
            stones += 1;
        }
    }
    return pile;
}