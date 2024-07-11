#include <vector>
#include <cassert>

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    stones.push_back(n);
    for (int i = 1; i < n; ++i) {
        if (stones[i - 1] % 2 == 0) {
            stones.push_back(stones[i - 1] + 2);
        } else {
            stones.push_back(stones[i - 1] + 1);
        }
    }
    return stones;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

// main function remains the same without redefinition.