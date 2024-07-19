#include <vector>
#include <cassert>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 0; i < n; ++i) {
        pile.push_back(8 + 2 * i);
    }
    return pile;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}