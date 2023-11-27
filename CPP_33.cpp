#include <algorithm>
#include <cassert>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> sort_third(std::vector<int> l);

int main() {
    assert(issame(sort_third({5, 6, 3, 4, 8, 9, 2, 1}), {2, 6, 3, 4, 8, 9, 5, 1}));
}

std::vector<int> sort_third(std::vector<int> l) {
    std::vector<int> l_prime(l);
    for (int i = 0; i < l_prime.size(); i++) {
        if (i % 3 == 0) {
            std::sort(l_prime.begin() + i, l_prime.begin() + i + 3);
        }
    }
    return l_prime;
}