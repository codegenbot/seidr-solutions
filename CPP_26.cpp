#include <algorithm>
#include <vector>

bool issame(int a, int b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::vector<int> uniqueNumbers(numbers.begin(), numbers.end());
    auto endUnique = std::unique(uniqueNumbers.begin(), uniqueNumbers.end(),
        [](int a, int b){return a == b;});
    uniqueNumbers.erase(endUnique, uniqueNumbers.end());
    return uniqueNumbers;
}