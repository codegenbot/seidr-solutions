#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (grid[i][j] == 1) {
                vector<vector<int>> tempGrid = grid;
                int val = 1;
                res.push_back(val);
                for (int l = 0; l < k - 1; ++l) {
                    int minDir = -1;
                    int minVal = INT_MAX;
                    for (int dir = 0; dir < 4; ++dir) {
                        if (dir == 0 && i > 0) {
                            int newVal = tempGrid[i - 1][j];
                            if (newVal < minVal) {
                                minDir = dir;
                                minVal = newVal;
                            }
                        } else if (dir == 1 && j < n - 1) {
                            int newVal = tempGrid[i][j + 1];
                            if (newVal < minVal) {
                                minDir = dir;
                                minVal = newVal;
                            }
                        } else if (dir == 2 && i < n - 1) {
                            int newVal = tempGrid[i + 1][j];
                            if (newVal < minVal) {
                                minDir = dir;
                                minVal = newVal;
                            }
                        } else if (dir == 3 && j > 0) {
                            int newVal = tempGrid[i][j - 1];
                            if (newVal < minVal) {
                                minDir = dir;
                                minVal = newVal;
                            }
                        }
                    }
                    if (minDir != -1) {
                        switch (minDir) {
                            case 0:
                                i--;
                                break;
                            case 1:
                                j++;
                                break;
                            case 2:
                                i++;
                                break;
                            case 3:
                                j--;
                                break;
                        }
                    } else
                        break;
                }
                return res;
            }
        }
    }
    return res;
}