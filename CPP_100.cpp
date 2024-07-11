#include <vector>
#include <cassert>
#include <algorithm>

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    for (int i = 0; i < n; ++i) {
        stones.push_back(n + 2 * i);
    }
    return stones;
}

int main() {
    assert(std::equal(make_a_pile(8).begin(), make_a_pile(8).end(), std::vector<int>{8, 10, 12, 14, 16, 18, 20, 22}.begin()));
    return 0;
}