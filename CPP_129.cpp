#include <algorithm>
#include <vector>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            bool found = false;
            for (int x = -1; x <= 1; x++) {
                for (int y = -1; y <= 1; y++) {
                    if (x == 0 && y == 0) continue;
                    int nx = i + x, ny = j + y;
                    if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                        for (int l = 0; l < k; l++) {
                            grid[nx][ny]--;
                            bool valid = true;
                            for (int i1 = 0; i1 < n; i1++) {
                                for (int j1 = 0; j1 < n; j1++) {
                                    if (grid[i1][j1] < 1) {
                                        valid = false;
                                        break;
                                    }
                                }
                                if (!valid) break;
                            }
                            if (valid) {
                                found = true;
                                res.push_back(grid[nx][ny]);
                                break;
                            }
                            grid[nx][ny]++;
                        }
                        if (found) break;
                    }
                }
                if (found) break;
            }
            if (found) break;
        }
    }
    return res;
}