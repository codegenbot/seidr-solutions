#include <iostream>
#include <vector>
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
    std::vector<int> inputList(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> inputList[i];
    }

    std::vector<int> result = solve(inputList);

    for (int num : result) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}