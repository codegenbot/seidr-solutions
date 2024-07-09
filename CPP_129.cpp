#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>>
            pq({{0, make_pair(0, 0)}});
    vector<vector<bool>> visited(n, vector<bool>(n));
    vector<int> res;
    
    while (!pq.empty()) {
        int val = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();
        
        if (k > 0) {
            res.push_back(val);
            k--;
        }
        
        for (auto dir : directions) {
            int newX = x + dir[0];
            int newY = y + dir[1];
            
            if (newX >= 0 && newX < n && newY >= 0 && newY < n && !visited[newX][newY]) {
                visited[newX][newY] = true;
                pq.push({grid[newX][newY], make_pair(newX, newY)});
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