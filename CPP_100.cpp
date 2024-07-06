```cpp
#include <vector>
#include <algorithm>

bool areSame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = 1;
    for (int i = 0; i < n; i++) {
        if ((n % 2) == 1) { // n is odd
            pile.push_back(stones);
            stones += 2;
        } else { // n is even
            pile.push_back(stones);
            stones += 1;
        }
    }
    return pile;
}

int main() {
    assert(std::equal(make_a_pile(8).begin(), make_a_pile(8).end(), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}