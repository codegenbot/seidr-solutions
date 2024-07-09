#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 0; i < n; i++) {
        if ((i + 1) % 2 == 0)
            pile.push_back((pile.empty() ? n : pile.back()) + 1);
        else
            pile.push_back((pile.empty() ? n : pile.back()) + 2);
    }
    return pile;
}

int main() {
    assert(make_a_pile(8) == std::vector({8, 10, 12, 14, 16, 18, 20, 22}));
    // ...
}