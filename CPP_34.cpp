#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::vector<int> solve(const std::vector<int>& l) {
    std::vector<int> sortedList = l;
    std::sort(sortedList.begin(), sortedList.end());
    sortedList.erase(std::unique(sortedList.begin(), sortedList.end()), sortedList.end());
    assert(issame(sortedList, l));
    return sortedList;
}

int main() {
    int n;
    std::cin >> n;

    std::vector<int> l(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> l[i];
    }

    std::vector<int> result = solve(l);

    for (int i = 0; i < result.size(); ++i) {
        std::cout << result[i] << " ";
    }

    return 0;
}