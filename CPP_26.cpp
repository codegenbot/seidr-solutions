#include <vector>
#include <algorithm>

std::vector<int> remove_duplicates(const std::vector<int>& numbers) {
    std::vector<int> uniqueNumbers(numbers.begin(), numbers.end());
    uniqueNumbers.erase(std::unique(uniqueNumbers.begin(), uniqueNumbers.end()),
                         uniqueNumbers.end());
    return uniqueNumbers;
}

int main() {
    assert(remove_duplicates({1, 2, 3, 2, 4, 3, 5}) == {1, 2, 3, 4, 5});
    return 0;
}