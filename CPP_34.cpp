#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> solve(const std::vector<int>& l) {
    std::vector<int> sortedList = l;
    std::sort(sortedList.begin(), sortedList.end());
    sortedList.erase(std::unique(sortedList.begin(), sortedList.end()), sortedList.end());
    return sortedList;
}