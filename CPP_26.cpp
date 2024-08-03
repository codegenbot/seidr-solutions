#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    return numbers;
}

int main() {
    std::vector<int> numbers = {1, 2, 3, 2, 4, 3, 5};
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    assert(issame(numbers, std::vector<int>({1, 4, 5})));
    return 0;
}