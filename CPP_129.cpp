#include<stdio.h>
#include<vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<int> res;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(res.size() == k) break;
            if(res.empty()) res.push_back(grid[i][j]);
            else{
                bool found = false;
                for(int x=-1; x<=1 && !found; x++){
                    for(int y=-1; y<=1 && !found; y++){
                        int newX = i + x, newY = j + y;
                        if(newX >= 0 && newX < n && newY >= 0 && newY < n){
                            if(res.back() == grid[newX][newY]){
                                res.push_back(grid[newX][newY]);
                                found = true;
                                break;
                            }
                        }
                    }
                }
            }
        }
    }
    return res;
}