#include <vector>
#include <algorithm>

std::vector<int> remove_duplicates(std::vector<int> numbers) {
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(const std::vector<int>& vec1, const std::vector<int>& vec2) {
    return vec1 == vec2;
}