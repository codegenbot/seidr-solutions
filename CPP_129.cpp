#include <stdio.h>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<int> res;
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (res.size() == k) break;
            res.push_back(grid[i][j]);
            if (res.size() > k) {
                res.pop_back();
                break;
            }
        }
    }
    return res;
}