#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::is_permutation(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> pluck(std::vector<int> values) {
    return values;
}

int main() {
    assert(issame(std::vector<int>{7, 9, 7, 1}, pluck({})));
    return 0;
}