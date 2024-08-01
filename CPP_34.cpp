#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> solve(const std::vector<int>& l) {
    std::vector<int> sortedList = l;
    std::sort(sortedList.begin(), sortedList.end());
    sortedList.erase(std::unique(sortedList.begin(), sortedList.end()), sortedList.end());
    return sortedList;
}

int main() {
    assert(issame(solve({5, 3, 5, 2, 3, 3, 9, 0, 123}), std::vector<int>({0, 2, 3, 5, 9, 123})));
}