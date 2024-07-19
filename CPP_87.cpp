#include <vector>
#include <algorithm>
#include <iostream>

bool issame(const std::vector<std::vector<int>>& a, const std::vector<std::vector<int>>& b) {
    return a == b;
}

std::vector<std::vector<int>> get_row(const std::vector<std::vector<int>>& lst, int x) {
    std::vector<std::vector<int>> result;
    for(int i = 0; i < lst.size(); i++) {
        for(int j = 0; j < lst[i].size(); j++) {
            if(lst[i][j] == x) {
                result.push_back(std::vector<int>{i, j});
            }
        }
    }

    std::sort(result.begin(), result.end(), [](const std::vector<int>& a, const std::vector<int>& b) {
        return a[0] < b[0] || (a[0] == b[0] && a[1] > b[1]);
    });

    return result;
}

bool check_vectors(const std::vector<std::vector<int>>& actual, const std::vector<std::vector<int>>& expected) {
    return actual == expected;
}

std::vector<std::vector<int>> expected = { {2, 2} };

auto result = get_row({ {}, {1}, {1, 2, 3} }, 3);
if (issame(result, expected)) {
    std::cout << "Test Passed!\n";
} else {
    std::cout << "Test Failed!\n";
}