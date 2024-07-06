#include <bits/stdc++.h>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

vector<vector<int>> minPath(vector<vector<int>> grid, int k){
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(grid[i][j] == 1){
                pq.push({1, {i, j}});
                visited[i][j] = true;
            }
        }
    }

    vector<int> path;
    while(!pq.empty() && path.size() < k){
        int val = pq.top().first;
        pair<int, int> pos = pq.top().second;
        pq.pop();
        
        if(path.size() > 0){
            if(val != path.back()){
                return {};
            }
        }
        
        path.push_back(val);
        
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        random_shuffle(directions.begin(), directions.end());
        
        for(auto dir : directions){
            int ni = pos.first + dir.first;
            int nj = pos.second + dir.second;
            
            if(ni >= 0 && ni < n && nj >= 0 && nj < n && !visited[ni][nj]){
                visited[ni][nj] = true;
                pq.push({grid[ni][nj], {ni, nj}});
            }
        }
    }

    return path;
}

int main() {
    vector<int> path = minPath({{1, 3}, {3, 2}}, 10);
    
    assert (path == vector<int>(10, 1));
    
    return 0;
}