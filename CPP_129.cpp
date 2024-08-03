#include <vector>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    for (int i = 0; i < k; i++) {
        int maxi = -1;
        int r = -1, c = -1;
        for (int j = 0; j < grid.size(); j++) {
            for (int jj = 0; jj < grid[0].size(); jj++) {
                if (grid[j][jj] > maxi) {
                    maxi = grid[j][jj];
                    r = j;
                    c = jj;
                }
            }
        }
        res.push_back(maxi);
        grid[r][c] = -1;
    }
    return res;
}