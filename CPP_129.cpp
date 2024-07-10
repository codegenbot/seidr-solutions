#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    vector<int> res;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (!visited[i][j]) {
                visited[i][j] = true;
                pq.push({grid[i][j], {i, j}});
            }
        }
    }

    while (!pq.empty()) {
        int val = pq.top().first;
        int i = pq.top().second.first;
        int j = pq.top().second.second;
        pq.pop();
        
        res.push_back(val);
        
        if (k > 0) {
            for (int x : {-1, 0, 1}) {
                for (int y : {-1, 0, 1}) {
                    if (i + x >= 0 && i + x < n && j + y >= 0 && j + y < n && !visited[i + x][j + y]) {
                        visited[i + x][j + y] = true;
                        pq.push({val, {i + x, j + y}});
                    }
                }
            }
        } else break;

        --k;
    }

    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> res = minPath(grid, k);
    for (int i : res) cout << i << " ";
    return 0;
}