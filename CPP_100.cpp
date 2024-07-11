#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    for (int i = 0; i < n; ++i) {
        stones.push_back(n + 2 * i);
    }
    return stones;
}

int main() {
    assert(std::equal(make_a_pile(8).cbegin(), make_a_pile(8).cend(), std::vector<int>{8, 10, 12, 14, 16, 18, 20, 22}.cbegin()));
    return 0;
}