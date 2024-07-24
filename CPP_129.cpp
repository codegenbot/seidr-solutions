#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    for (int i = 0; i < k; i++) {
        int max_val = 1;
        for (int j = 0; j < grid.size(); j++) {
            for (int col = 0; col < grid[j].size(); col++) {
                if (grid[j][col] > max_val) {
                    max_val = grid[j][col];
                    break;
                }
            }
        }
        result.push_back(max_val);
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == max_val) {
                    grid[i][j] = -1;
                    break;
                }
            }
        }
    }
    return result;
}

int main() {
    vector<vector<int>> grid = {{5,9,3}, {4,1,6}, {7,8,2}};
    int k = 1;
    vector<int> res = minPath(grid, k);
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}