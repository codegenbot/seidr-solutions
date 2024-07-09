#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    std::vector<int> unique_digits = {0, 2, 4, 6, 8, 1, 3, 5, 7, 9};

    assert(issame(unique_digits, {0, 2, 4, 6, 8, 1, 3, 5, 7, 9}));

    return 0;
}