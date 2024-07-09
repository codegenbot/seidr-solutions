#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::is_permutation(a.begin(), a.end(), b.begin());
}

int main() {
    std::vector<int> digits = {135, 103, 31};

    assert(issame(digits, {31, 135}));

    return 0;
}