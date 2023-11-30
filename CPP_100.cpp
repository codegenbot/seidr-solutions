#include <vector>
#include <cassert>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = n;
    pile.push_back(stones);
    for (int i = 1; i < n; i++) {
        if (stones % 2 == 0) {
            stones += 2;
        } else {
            stones += 1;
        }
        pile.push_back(stones);
    }
    return pile;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if (a == b) {
        return true;
    } else {
        return false;
    }
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}