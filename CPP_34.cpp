#include <vector>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::vector<int> solve(const std::vector<int>& l) {
    std::vector<int> sortedList = l;
    std::sort(sortedList.begin(), sortedList.end());
    sortedList.erase(std::unique(sortedList.begin(), sortedList.end()), sortedList.end());
    assert(issame(std::unique(sortedList.begin(), sortedList.end()), l));
    return sortedList;
}

int main() {
    assert(issame(std::vector<int>{0, 2, 3, 5, 9, 123}, solve({5, 3, 5, 2, 3, 3, 9, 0, 123})));
    return 0;
}