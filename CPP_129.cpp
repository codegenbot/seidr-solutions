#include <iostream>
#include <vector>

// Function definition
bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size())
        return false;
    for (int i = 0; i < a.size(); i++)
        if (a[i] != b[i])
            return false;
    return true;
}

vector<int> minPath(vector<vector<int>>& grid, int k) {
    vector<int> result;
    int n = grid.size();
    int m = grid[0].size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (grid[i][j] == k) {
                if (i - 1 >= 0 && j - 1 >= 0 && 
                    i + 1 < n && j + 1 < m &&
                    grid[i-1][j] == k && grid[i+1][j] == k && 
                    grid[i][j-1] == k && grid[i][j+1] == k) {
                        result.push_back(k);
                    }
            }
        }
    }

    return result;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (auto val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}