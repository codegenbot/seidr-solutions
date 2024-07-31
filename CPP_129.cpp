#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

bool issame(int i, int j) {
    return i == j;
}

vector<int> minPath(vector<vector<int>> grid, int k);

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 5;
    vector<int> result = minPath(grid, k);
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> path;
    for (const auto& row : grid) {
        auto it = find_if(row.begin(), row.end(), [k](int num) { return issame(num, k); });
        if (it != row.end()) {
            path.push_back(*it);
        }
    }
    return path;
}