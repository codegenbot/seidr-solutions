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
            int val = grid[i][j];
            vector<int> temp;
            temp.push_back(val);
            k--;
            int dir[4][2] = {{-1,0},{1,0},{0,-1},{0,1}};
            for (int d = 0; d < 4; d++) {
                int ni = i + dir[d][0];
                int nj = j + dir[d][1];
                if (ni >= 0 && ni < n && nj >= 0 && nj < n) {
                    temp.push_back(grid[ni][nj]);
                    k--;
                    if (k == 0) {
                        res = temp;
                        return res;
                    }
                }
            }
        }
    }
    
    return res;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (int i : result) {
        cout << i << " ";
    }
    return 0;
}