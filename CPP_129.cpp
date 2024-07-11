#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            dp[i][j] = grid[i][j];
    
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    pq.push({1, {0, 0}});
    
    vector<int> res;
    while (!pq.empty()) {
        int val = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();
        
        if (res.size() == k)
            break;
        
        res.push_back(val);
        
        vector<pair<int, pair<int, int>>> neighbors = {{1, {x - 1, y}}, {-1, {x + 1, y}}, {0, {x, y - 1}}, {0, {x, y + 1}}};
        for (auto& neighbor : neighbors) {
            int nx = neighbor.second.first;
            int ny = neighbor.second.second;
            
            if (nx >= 0 && nx < n && ny >= 0 && ny < n) {
                pq.push({dp[nx][ny], {nx, ny}});
                dp[nx][ny] = -1; // mark as visited
            }
        }
    }
    
    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (auto& val : result)
        cout << val << " ";
    return 0;
}