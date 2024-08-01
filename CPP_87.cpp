#include <algorithm>
#include <iostream>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b);

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x);

int main() {
    // Example usage
    std::vector<std::vector<int>> lst = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int x = 5;
    std::vector<std::vector<int>> result = get_row(lst, x);

    // Output the result
    for (const std::vector<int>& res : result) {
        std::cout << res[0] << " " << res[1] << std::endl;
    }

    return 0;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    if (a[0] != b[0]) {
        return a[0] < b[0];
    }
    return a[1] > b[1];
}

std::vector<std::vector<int>> get_row(std::vector<std::vector<int>> lst, int x){
    std::vector<std::vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    std::sort(result.begin(), result.end(), issame);
    return result;
}