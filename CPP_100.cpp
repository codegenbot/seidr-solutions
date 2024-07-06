```cpp
#include <vector>
#include <algorithm>

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

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int main() {
    int n = 10; // input from user
    auto expected = make_a_pile(n);
    auto actual1 = make_a_pile(n);
    auto actual2 = make_a_pile(n);

    assert(issame(expected, actual1) && "The first pile is not the same");
    assert(!issame(expected, actual2) && "Both piles are the same");

    return 0;
}