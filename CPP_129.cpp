#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<int> path;
    int x = 0, y = 0;
    
    for (int i = 0; i < k; ++i) {
        path.push_back(grid[x][y]);
        
        if ((x + y) % 2 == 0) {
            if (y == 0) {
                if (x + 1 < N) {
                    x++;
                } else {
                    y++;
                }
            } else if (x == N - 1) {
                y++;
            } else {
                x++;
                y--;
            }
        } else {
            if (x == 0) {
                if (y + 1 < N) {
                    y++;
                } else {
                    x++;
                }
            } else if (y == N - 1) {
                x++;
            } else {
                x--;
                y++;
            }
        }
    }
    
    return path;
}