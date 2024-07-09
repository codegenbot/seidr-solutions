#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (k == 1) {
                res.push_back(grid[i][j]);
                return res;
            }
            if (i > 0 && j > 0 && i < n - 1 && j < n - 1) {
                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {
                        int ni = i + x;
                        int nj = j + y;
                        if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                            res.push_back(grid[ni][nj]);
                            k--;
                            if (k == 0) return res;
                        }
                    }
                }
            } else if (i > 0 && j > 0) {
                for (int x = -1; x <= 1; x++) {
                    int ni = i + x;
                    int nj = j;
                    if (ni >= 0 && ni < n) {
                        res.push_back(grid[ni][nj]);
                        k--;
                        if (k == 0) return res;
                    }
                }
            } else if (i > 0 && j < n - 1) {
                for (int x = -1; x <= 1; x++) {
                    int ni = i + x;
                    int nj = j + 1;
                    if (ni >= 0 && ni < n) {
                        res.push_back(grid[ni][nj]);
                        k--;
                        if (k == 0) return res;
                    }
                }
            } else if (i < n - 1 && j > 0) {
                for (int x = -1; x <= 1; x++) {
                    int ni = i + 1;
                    int nj = j + x;
                    if (ni >= 0 && ni < n) {
                        res.push_back(grid[ni][nj]);
                        k--;
                        if (k == 0) return res;
                    }
                }
            } else if (i > 0) {
                for (int x = -1; x <= 1; x++) {
                    int ni = i + x;
                    if (ni >= 0 && ni < n) {
                        res.push_back(grid[ni][j]);
                        k--;
                        if (k == 0) return res;
                    }
                }
            } else if (j > 0) {
                for (int y = -1; y <= 1; y++) {
                    int nj = j + y;
                    if (nj >= 0 && nj < n) {
                        res.push_back(grid[i][nj]);
                        k--;
                        if (k == 0) return res;
                    }
                }
            } else {
                for (int x = -1; x <= 1; x++) {
                    int ni = i + x;
                    int nj = j;
                    if (ni >= 0 && ni < n) {
                        res.push_back(grid[ni][nj]);
                        k--;
                        if (k == 0) return res;
                    }
                }
            }
        }
    }
    return res;
}