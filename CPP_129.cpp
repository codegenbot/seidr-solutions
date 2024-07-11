#include<vector>
#include<algorithm>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    int r = 0, c = 0;
    vector<int> path;
    
    for (int i = 0; i < k; ++i) {
        path.push_back(grid[r][c]);
        
        if ((r + c) % 2 == 0) { // Move up-right
            if (c == n - 1) {
                ++r;
            } else if (r == 0) {
                ++c;
            } else {
                --r;
                ++c;
            }
        } else { // Move down-left
            if (r == n - 1) {
                ++c;
            } else if (c == 0) {
                ++r;
            } else {
                ++r;
                --c;
            }
        }
    }
    
    return path;
}