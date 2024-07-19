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
    std::vector<int> numbers = {1, 5, 1, 4, 7, 4, 6, 5};
    std::vector<int> expected = {1, 4, 5};
    auto unique_numbers = remove_duplicates(numbers);
    assert(unique_numbers == expected);
    return 0;
}