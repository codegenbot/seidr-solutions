#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<int> unique_digits = {0, 2, 4, 6, 8, 1, 3, 5, 7, 9};

    assert(issame(unique_digits, std::vector<int>{0, 2, 4, 6, 8, 1, 3, 5, 7, 9}));

    assert(issame(std::vector<int>{1, 3, 5}, std::vector<int>{5, 1, 3}));

    return 0;
}