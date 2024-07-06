```cpp
#include <vector>
#include <initializer_list>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            pile.push_back(i * 2 - 1);
        } else {
            pile.push_back(i * 2);
        }
    }
    return pile;
}

bool arePilesEqual(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    assert(arePilesEqual(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
}