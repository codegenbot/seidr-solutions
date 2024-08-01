#include <algorithm>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> uniqueNumbers(numbers.begin(), numbers.end());
    std::sort(uniqueNumbers.begin(), uniqueNumbers.end(), issame);
    uniqueNumbers.erase(std::unique(uniqueNumbers.begin(), uniqueNumbers.end(), issame), uniqueNumbers.end());
    return uniqueNumbers;
}