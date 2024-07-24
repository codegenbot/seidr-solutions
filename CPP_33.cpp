#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sorted_third(std::vector<int> l) {
    std::vector<int> l_prime = l;
    for (int i = 0; i < l.size(); i += 3) {
        std::sort(l_prime.begin() + i, l_prime.begin() + std::min(i + 3, static_cast<int>(l_prime.size())));
    }
    return l_prime;
}

int main() {
    assert(issame(sorted_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
    return 0;
}