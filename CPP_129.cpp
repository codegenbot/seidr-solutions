#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<vector<int>> directions({{-1, 0}, {1, 0}, {0, -1}, {0, 1}});
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>>
            pq({{grid[0][0], make_pair(0, 0)}});
    
    vector<vector<bool>> visited(N, vector<bool>(N));
    vector<int> path;
    
    while (!pq.empty()) {
        pair<int, pair<int, int>> top = pq.top();
        pq.pop();
        
        if (k-- == 0) break;
        
        for (auto d : directions) {
            int x = top.second.first + d[0];
            int y = top.second.second + d[1];
            
            if (x >= 0 && x < N && y >= 0 && y < N && !visited[x][y]) {
                visited[x][y] = true;
                pq.push({grid[x][y], make_pair(x, y)});
                
                path.push_back(grid[x][y]);
            }
        }
    }
    
    return path;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> res = minPath(grid, k);
    
    for (auto i : res) {
        cout << i << " ";
    }
    
    return 0;
}