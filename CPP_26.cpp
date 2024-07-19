#include <algorithm>
#include <vector>

std::vector<int> remove_duplicates(const std::vector<int>& numbers) {
    std::vector<int> result = numbers;
    sort(result.begin(), result.end());
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}