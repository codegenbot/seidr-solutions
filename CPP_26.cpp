#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers);

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    return std::vector<int>(numbers.begin(), std::unique(numbers.begin(), numbers.end()));
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), std::vector<int>({1, 4, 5})));
    return 0;
}