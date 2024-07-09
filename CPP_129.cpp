#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>>& grid, int k) {
    vector<pair<int, pair<int, int>>> edges;
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (i > 0) edges.push_back({grid[i][j], {i - 1, j}});
            if (i < grid.size() - 1) edges.push_back({grid[i][j], {i + 1, j}});
            if (j > 0) edges.push_back({grid[i][j], {i, j - 1}});
            if (j < grid[i].size() - 1) edges.push_back({grid[i][j], {i, j + 1}});
        }
    }

    vector<int> res;
    priority_queue<pair<vector<int>, int>, vector<pair<vector<int>, int>>, 
                    function<bool(pair<vector<int>, int>, pair<vector<int>, int>)>([&](pair<vector<int>, int> a, pair<vector<int>, int> b) {
        return a.first < b.first;
    }) > q;

    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            q.push({vector<int>(1, grid[i][j]), {i, j}});
        }
    }

    for (int _ = 0; _ < k; _++) {
        pair<vector<int>, int> cur = q.top();
        q.pop();

        res.insert(res.end(), cur.first.begin() + 1, cur.first.end());

        if (_ == k - 1) break;

        for (auto& edge : edges) {
            if (edge.second == cur.second && edge.first != grid[edge.second.first][edge.second.second]) {
                q.push({vector<int>(cur.first.size(), edge.first), edge.second});
            }
        }
    }

    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;

    vector<int> result = minPath(grid, k);
    for (int i : result) {
        cout << i << " ";
    }

    return 0;
}