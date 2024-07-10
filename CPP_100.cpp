#include <vector>
#include <assert.h>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = n;

    while(stones > 0) {
        pile.push_back(stones);
        if (stones % 2 == 1) {
            stones = stones + 1;
        } else {
            stones = stones + 2;
        }
    }

    return pile;
}

bool issame(std::vector<int> pile, std::vector<int> expected) {
    return issame(pile, expected);
}

int main() {
    int n = 10; // input here
    std::vector<int> result = make_a_pile(n);
    assert(issame(result, make_a_pile(n)));
    return 0;
}