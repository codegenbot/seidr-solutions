#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dir({{-1, 0}, {1, 0}, {0, -1}, {0, 1}});
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    vector<vector<bool>> visited(n, vector<bool>(n));
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                pq.push({grid[i][j], {i, j}});
                visited[i][j] = true;
            }
        }
    }

    vector<int> res(k);
    for (int i = 0; i < k; ++i) {
        int val = pq.top().first;
        res[i] = val;
        pq.pop();
        
        if (!pq.empty()) {
            pair<int, int> pos = pq.top().second;
            visited[pos.first][pos.second] = false;
            
            for (int j = 0; j < 4; ++j) {
                int ni = pos.first + dir[j][0];
                int nj = pos.second + dir[j][1];
                
                if (ni >= 0 && ni < n && nj >= 0 && nj < n && !visited[ni][nj]) {
                    pq.push({grid[ni][nj], {ni, nj}});
                    visited[ni][nj] = true;
                }
            }
        }
    }

    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    
    vector<int> result = minPath(grid, k);
    for (auto val : result) {
        cout << val << " ";
    }
    return 0;
}