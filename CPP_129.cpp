#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, greater<pair<int, pair<int, int>>>> pq;
    vector<int> result;

    // Start from every cell and add it to the priority queue
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            pq.push({grid[i][j], {i, j}});
        }
    }

    // Perform BFS
    while (!pq.empty()) {
        int val = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();

        if (k > 0) {
            result.push_back(val);
            k--;

            // Add neighbors to the priority queue
            for (int i = -1; i <= 1; ++i) {
                for (int j = -1; j <= 1; ++j) {
                    int newX = x + i;
                    int newY = y + j;

                    if (newX >= 0 && newX < n && newY >= 0 && newY < n && !visited[newX][newY]) {
                        visited[newX][newY] = true;
                        pq.push({val, {newX, newY}});
                    }
                }
            }
        } else {
            break;
        }
    }

    return result;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (int val : result) {
        cout << val << " ";
    }
    return 0;
}