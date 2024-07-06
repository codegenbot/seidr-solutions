#include <vector>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = 1;
    for (int i = 0; i < n; i++) {
        pile.push_back(stones);
        if (i % 2 != 0) {
            stones++;
        } else {
            stones += 2;
        }
    }
    return pile;
}

int main() {
    assert(issame(make_a_pile(8), std::vector<int>{1,3,5,7,9,11,13,15}));
}