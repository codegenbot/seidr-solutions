#include <vector>
#include <algorithm>

std::vector<int> std::remove_duplicates(std::vector<int>& numbers) {
    std::sort(numbers.begin(), numbers.end());
    numbers.erase(std::unique(numbers.begin(), numbers.end()), numbers.end());
    return numbers;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return std::remove_duplicates(a) == std::remove_duplicates(b);
}