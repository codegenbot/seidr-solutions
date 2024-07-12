#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    stones.push_back(n);

    for (int i = 1; i < 8; i++) {
        if (stones.back() % 2 == 0) {
            stones.push_back(stones.back() + 2);
        } else {
            stones.push_back(stones.back() + 1);
        }
    }

    return stones;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8), std::vector<int>{8, 10, 12, 14, 16, 18, 20, 22});
    
    return 0;
}