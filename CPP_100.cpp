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

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) return false;
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int n = 10; // input here
    std::vector<int> result = make_a_pile(n);
    assert(issame(result, make_a_pile(n)));
    return 0;
}