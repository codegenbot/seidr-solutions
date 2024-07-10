#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> sort_third(const std::vector<int>& l) {
    std::vector<int> l_prime = l;
    for (int i = 0; i < l.size(); i+=3) {
        std::sort(l_prime.begin() + i, l_prime.begin() + i + 3);
    }
    return l_prime;
}

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
}