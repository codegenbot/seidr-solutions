#include <vector>
#include <algorithm>
#include <cassert>

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

int main2() {
    std::vector<int> result = remove_duplicates({1, 2, 3, 2, 4, 3, 5});
    assert(result == std::vector<int>{1, 4, 5});
    return 0;
}