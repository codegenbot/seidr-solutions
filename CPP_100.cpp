#include <vector>
#include <cassert>

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    stones.push_back(n);
    for (int i = 1; i < n; ++i) {
        n += (n % 2 == 0) ? 2 : 1;
        stones.push_back(n);
    }
    return stones;
}