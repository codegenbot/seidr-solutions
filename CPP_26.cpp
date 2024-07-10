#include <vector>
#include <algorithm>

namespace custom {
    using std::vector;
    using std::sort;
    using std::unique;
}

bool issame(const custom::vector<int>& a, const custom::vector<int>& b) {
    return a == b;
}

custom::vector<int> remove_duplicates(custom::vector<int> numbers) {
    custom::sort(numbers.begin(), numbers.end());
    numbers.erase(custom::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}