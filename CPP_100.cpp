```cpp
#include <vector>
#include <algorithm>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = 1;
    for (int i = 0; i < n; i++) {
        if (n % 2 != 0) {
            pile.push_back(stones);
            stones += 1;
        } else {
            pile.push_back(stones);
            stones += 2;
        }
    }
    return pile;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
}