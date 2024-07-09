#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int main() {
    std::vector<int> unique_digits = {1, 2, 3, 4, 5};
    assert(issame(unique_digits, {1, 2, 3, 4, 5}));
}