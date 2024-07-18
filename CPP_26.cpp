#include <vector>
#include <algorithm>

bool issame(std::vector<int>& a, std::vector<int>& b) {
    return a == b;
}

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}