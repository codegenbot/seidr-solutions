#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>> pq;
    
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            pq.push({grid[i][j], {i, j}});
        }
    }

    vector<int> res;
    while (!pq.empty() && k > 0) {
        int val = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();
        
        if (visited[x][y]) continue;
        
        visited[x][y] = true;
        res.push_back(val);
        
        k--;
        
        vector<pair<int, pair<int, int>>> neighbors;
        if (x > 0) neighbors.emplace_back(grid[x-1][y], {x-1, y});
        if (x < n - 1) neighbors.emplace_back(grid[x+1][y], {x+1, y});
        if (y > 0) neighbors.emplace_back(grid[x][y-1], {x, y-1});
        if (y < n - 1) neighbors.emplace_back(grid[x][y+1], {x, y+1});
        
        for (auto &neighbor : neighbors) {
            pq.push(neighbor);
        }
    }

    return res;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> res = minPath(grid, k);

    for (int val : res) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}