#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    int i = 0, j = 0;
    vector<int> path;

    for (int step = 0; step < k; ++step) {
        path.push_back(grid[i][j]);
        
        if ((i + j) % 2 == 0) {
            if (j + 1 < N) {
                j++;
            } else {
                i++;
            }
        } else {
            if (i + 1 < N) {
                i++;
            } else {
                j++;
            }
        }
    }

    return path;
}