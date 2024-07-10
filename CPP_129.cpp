#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> visited(n, vector<int>(n, 0));
    priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>> > pq;
    pq.push({1, {0, 0}});
    visited[0][0] = 1;

    while (!pq.empty()) {
        int val = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();

        if (k == 0) break;

        for (int i = -1; i <= 1; i++) {
            for (int j = -1; j <= 1; j++) {
                if ((i == 0 && j == 0) || x + i < 0 || y + j < 0 || x + i >= n || y + j >= n)
                    continue;
                int newX = x + i, newY = y + j;
                if (visited[newX][newY]) continue;

                visited[newX][newY] = 1;
                pq.push({val - grid[newX][newY], {newX, newY}});
            }
        }

        k--;
    }

    vector<int> res;
    while (!pq.empty()) {
        int val = pq.top().first;
        int x = pq.top().second.first;
        int y = pq.top().second.second;
        pq.pop();
        res.push_back(val);
    }

    reverse(res.begin(), res.end());
    return res;
}