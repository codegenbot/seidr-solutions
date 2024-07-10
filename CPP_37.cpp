```
#include <vector>
#include <algorithm>

std::vector<int> sort_even(const std::vector<int>& numbers) {
    std::vector<int> result;
    for (int i : numbers) {
        if (i % 2 == 0) {
            result.push_back(i);
        }
    }
    std::sort(result.begin(), result.end());
    return result;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (std::abs(a[i] - b[i]) > 1e-9) {
            return false;
        }
    }
    return true;
}

void main() {
    std::vector<int> numbers = {5, 8, -12, 4, 23, 2, 3, 11, 12, -10};
    std::vector<int> even_numbers = sort_even(numbers);
    assert(issame(even_numbers, {2, 4, 8, 12}));
}