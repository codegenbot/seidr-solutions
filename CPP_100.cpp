```cpp
#include <vector>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    std::vector<int> make_a_pile_result = {8, 10, 12, 14, 16, 18, 20, 22};
    assert(issame(make_a_pile(8), make_a_pile_result));
    return 0;
}

std::vector<int> make_a_pile(int n) {
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