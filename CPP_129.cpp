#include <iostream>
#include <vector>
#include <queue>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> visited(n, vector<int>(n));
    
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    pq.push({0, {0, 0}});
    visited[0][0] = 1;
    
    vector<int> res;
    while (!pq.empty()) {
        int val = -pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();
        
        if (k > 0) {
            for (int i = -1; i <= 1; i++) {
                for (int j = -1; j <= 1; j++) {
                    int nx = x + i, ny = y + j;
                    if (nx >= 0 && nx < n && ny >= 0 && ny < n && !visited[nx][ny]) {
                        visited[nx][ny] = 1;
                        pq.push({-grid[nx][ny], {nx, ny}});
                        res.push_back(grid[nx][ny]);
                    }
                }
            }
        } else break;
        
        k--;
    }
    
    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> res = minPath(grid, k);
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}