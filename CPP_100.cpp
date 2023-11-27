#include <vector>

std::vector<int> make_a_pile(int n);

bool issame(std::vector<int> a, std::vector<int> b) {
    // Implementation of the issame function
    // ...
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    // ...
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    int stonesInLevel = n;
    for (int i = 0; i < n; i++) {
        stones.push_back(stonesInLevel);
        stonesInLevel += (n % 2 == 0) ? 2 : 1;
    }
    return stones;
}