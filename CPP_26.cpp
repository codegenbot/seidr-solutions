#include <vector>
#include <algorithm>
#include <cassert>
#include <unordered_set>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return std::unordered_set<int>(a.begin(), a.end()) == std::unordered_set<int>(b.begin(), b.end());
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::unordered_set<int> uniqueNumbers(numbers.begin(), numbers.end());
    numbers.assign(uniqueNumbers.begin(), uniqueNumbers.end());
    return numbers;
}

int main() {
    assert(issame(remove_duplicates({1, 2, 3, 2, 4, 3, 5}), std::vector<int>({1, 4, 5})));
    return 0;
}