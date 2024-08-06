#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> remove_duplicates(const std::vector<int>& numbers) {
    std::vector<int> result = numbers;
    std::sort(result.begin(), result.end());
    result.erase(std::unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    assert((remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == std::vector<int>{1, 2, 3, 4, 5}));
    return 0;
}