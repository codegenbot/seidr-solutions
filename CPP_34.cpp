```
#include <algorithm>
#include <vector>

std::vector<int> remove_duplicates(const std::vector<int>& l) {
    std::vector<int> result(l.begin(), std::unique(l.begin(), l.end()).end());
    return result;
}

std::vector<int>::iterator remove_duplicates(std::vector<int>::iterator start, std::vector<int>::iterator end) {
    std::sort(start, end);
    auto it = std::unique_copy(start, end, start);
    return it;
}