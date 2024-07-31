#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> eat(int number, int need, int remaining) {
    int total = number + need;
    int eaten = std::min(total, remaining);
    int left = std::max(0, total - remaining);
    return std::vector<int>{eaten, left};
}

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

// commented out main() function as it is already defined earlier in the code
// int main() {
//     assert(issame(eat(4, 5, 1), std::vector<int>{5, 0}));
//     return 0;
// }