#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> path;
    int x = 0, y = 0;
    for(int i = 0; i < k; i++){
        path.push_back(grid[x][y]);
        if((x + y) % 2 == 0){
            if(y < n - 1) y++;
            else x++;
            if(x < n) continue;
            x--; y++;
        }
        else{
            if(x < n - 1) x++;
            else y++;
            if(y < n) continue;
            y--; x++;
        }
    }
    return path;
}