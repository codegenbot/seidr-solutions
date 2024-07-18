#include <vector>

bool issame(int n, int m) {
    return n == m;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> stones;
    stones.push_back(n);
    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
        } else {
            n += 3;
        }
        stones.push_back(n);
    }
    return stones;
}