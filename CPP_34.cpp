```
#include <algorithm>
#include <vector>

std::vector<int> remove_duplicates(std::vector<int> l) {
    std::vector<int> result(l.begin(), remove_duplicates_copy(l.begin(), l.end()).end());
    return result;
}

std::vector<int>::iterator remove_duplicates_copy(std::vector<int>::iterator start, std::vector<int>::iterator end) {
    sort(start, end);
    auto it = std::unique_copy(start, end, start);
    return it;
}