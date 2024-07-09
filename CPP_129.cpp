#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (grid[i][j] > 1) {
                // Start from the cell with value 1
                int curr_val = 1;
                vector<int> path;
                for (int l = 0; l < k; l++) {
                    int di[] = {-1, 0, 1, 0};
                    int dj[] = {0, -1, 0, 1};
                    bool found = false;
                    for (int d = 0; d < 4; d++) {
                        int ni = i + di[d];
                        int nj = j + dj[d];
                        if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                            if (grid[ni][nj] == curr_val) {
                                path.push_back(curr_val);
                                i = ni;
                                j = nj;
                                found = true;
                                break;
                            }
                        }
                    }
                    if (!found) {
                        // If no such neighbor cell is found, move to the next cell
                        for (int d = 0; d < 4; d++) {
                            int ni = i + di[d];
                            int nj = j + dj[d];
                            if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                                path.push_back(grid[ni][nj]);
                                i = ni;
                                j = nj;
                                break;
                            }
                        }
                    }
                }
                // Add the last cell to the result
                res = path;
                return res;
            }
        }
    }
    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> res = minPath(grid, k);
    for (auto val : res) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}