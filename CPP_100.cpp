#include <vector>

bool issame(std::vector<int>& p1, std::vector<int>& p2) {
    if (p1.size() != p2.size()) return false;
    for (int i = 0; i < p1.size(); i++) {
        if (p1[i] != p2[i]) return false;
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    stones.push_back(n);
    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n -= 1;
        }
        stones.push_back(n);
    }
    return stones;
}