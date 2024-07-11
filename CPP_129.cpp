#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; i++) {
        int maxVal = -1;
        int maxRow = -1, maxCol = -1;
        for (int j = 0; j < grid.size(); j++) {
            for (int col = 0; col < grid[j].size(); col++) {
                if (grid[j][col] > maxVal && res.empty() || find(res.begin(), res.end(), grid[j][col]) == res.end()) {
                    maxVal = grid[j][col];
                    maxRow = j;
                    maxCol = col;
                }
            }
        }
        res.push_back(maxVal);
        grid[maxRow][maxCol] = -1; // mark as visited
    }
    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}