#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<int> remove_duplicates(const std::vector<int>& numbers) {
    std::set<int> uniqueNumbers(numbers.begin(), numbers.end());
    return std::vector<int>(uniqueNumbers.begin(), uniqueNumbers.end());
}