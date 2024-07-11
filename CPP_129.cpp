#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    vector<int> res;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(grid[i][j] == 1){
                pq.push({0, {i, j}});
                visited[i][j] = true;
                break;
            }
        }
        if(!pq.empty())break;
    }
    
    while(k--){
        pair<int, int> curr = pq.top().second;
        pq.pop();
        
        for(int i=-1; i<=1; i++){
            for(int j=-1; j<=1; j++){
                if(i == 0 && j == 0) continue;
                int ni = curr.first + i;
                int nj = curr.second + j;
                
                if(ni >= 0 && ni < n && nj >= 0 && nj < n && !visited[ni][nj]){
                    pq.push({grid[ni][nj], {ni, nj}});
                    visited[ni][nj] = true;
                    res.push_back(grid[ni][nj]);
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
    for(int i=0; i<k; i++)cout<<result[i]<<" ";
    return 0;
}