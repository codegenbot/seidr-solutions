#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] == 1) {
                res.push_back(grid[i][j]);
                int cnt = 0;
                while (cnt < k && i + 1 < n) {
                    grid[i][j]--;
                    res.push_back(grid[i][j]);
                    cnt++;
                    i++;
                }
                i--;
                break;
            }
        }
    }
    return res;
}

int main() {
    vector<vector<int>> grid = {{5,9,3}, {4,1,6}, {7,8,2}};
    int k = 1;
    vector<int> result = minPath(grid, k);
    for (auto i : result) {
        cout << i << " ";
    }
    return 0;
}