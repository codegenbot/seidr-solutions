#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>>
        pq({{0, {0, 0}}});
    
    vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    
    vector<int> res;
    
    while (!pq.empty()) {
        int curVal = pq.top().first;
        pair<int, int> curPos = pq.top().second;
        pq.pop();
        
        if (curPos.first < k) {
            for (auto& d : directions) {
                int newX = curPos.first + d[0];
                int newY = curPos.second + d[1];
                
                if (newX >= 0 && newX < n && newY >= 0 && newY < n &&
                    !visited[newX][newY] && grid[newX][newY] != curVal) {
                    
                    visited[newX][newY] = true;
                    pq.push({grid[newX][newY], {newX, newY}});
                }
            }
        } else {
            res.push_back(curVal);
            break;
        }
    }
    
    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> res = minPath(grid, k);
    for (auto& val : res) {
        cout << val << " ";
    }
    return 0;
}