#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(const std::vector<int>& numbers) {
    std::vector<int> result = numbers;
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

void main() {
    assert(issame(std::vector<int>({1, 2, 3, 2, 4, 3, 5}), std::vector<int>({1, 2, 3, 4, 5})));
}