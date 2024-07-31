#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

namespace vec {
    using std::vector;
}

vec::vector<int> remove_duplicates(vec::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(vec::vector<int> a, vec::vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), vec::vector<int>{1, 4, 5}));
    return 0;
}