```cpp
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maxIncreaseKeepingSingle(vector<vector<int>>& grid) {
    int n = grid.size();
    for (int i = 0; i < n; i++) {
        sort(grid[i].begin(), grid[i].end());
    }
    
    int sum = 0;
    for (int i = 1; i < n - 1; i++) {
        for (int j = 1; j < n - 1; j++) {
            int leftMax = grid[i][0];
            int rightMax = grid[i][n-1];
            int topMax = grid[0][j];
            int bottomMax = grid[n-1][j];
            
            if (i > 0) leftMax = grid[i-1][0];
            if (i < n - 1) rightMax = grid[i+1][n-1];
            if (j > 0) topMax = grid[0][j-1];
            if (j < n - 1) bottomMax = grid[n-1][j+1];
            
            sum += min(leftMax, rightMax) + min(topMax, bottomMax);
        }
    }
    
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> grid[i][j];
        }
    }
    cout << maxIncreaseKeepingSingle(grid) << endl;
}