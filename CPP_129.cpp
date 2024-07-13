#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    int n = grid.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] <= k) {
                int value = grid[i][j];
                vector<int> path;
                bool found = false;
                for (int x = -1; x <= 1 && !found; x++) {
                    for (int y = -1; y <= 1 && !found; y++) {
                        if (x == 0 && y == 0) continue;
                        int newX = i + x, newY = j + y;
                        if (newX >= 0 && newX < n && newY >= 0 && newY < n) {
                            for (int z = 1; z <= k; ++z) {
                                path.push_back(grid[newX][newY]);
                                if (path.size() == z) {
                                    found = true;
                                    break;
                                }
                            }
                        }
                    }
                }
                if (found) {
                    sort(path.begin(), path.end());
                    int min = *path.begin();
                    bool isMin = true;
                    for (int x : path) {
                        if (x < min) {
                            isMin = false;
                            break;
                        } else if (x > min) {
                            isMin = false;
                            break;
                        }
                    }
                    if (isMin) {
                        result.push_back(value);
                        while (k-- > 0) {
                            for (int x : path) {
                                if (grid[i][j] == x) {
                                    result.push_back(x);
                                    --k;
                                    break;
                                }
                            }
                        }
                        return result;
                    }
                }
            }
        }
    }
    return {};
}