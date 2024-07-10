#include <vector>
#include <algorithm>
#include <cassert>

namespace custom {
    using std::vector;
    using std::sort;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

custom::vector<int> remove_duplicates(custom::vector<int> numbers) {
    custom::sort(numbers.begin(), numbers.end());
    numbers.erase(custom::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}