#include <iostream>
#include <vector>
#include <queue>
#include <utility>

using namespace std;

struct cmp {
    bool operator()(const pair<int, pair<int, int>>& p1, const pair<int, pair<int, int>>& p2) {
        return p1.second > p2.second;
    }
};

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<pair<int, pair<int, int>>, std::allocator<std::pair<int, pair<int, int>>>>> neighbors(n);
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (i > 0) neighbors[i].push_back({make_pair(i-1, j), grid[i][j]});
            if (i < n-1) neighbors[i].push_back({make_pair(i+1, j), grid[i][j]});
            if (j > 0) neighbors[i].push_back({{i, j-1}, grid[i][j]});
            if (j < n-1) neighbors[i].push_back({{i, j+1}, grid[i][j]});
        }
        for (auto& neighbor : neighbors[i]) {
            priority_queue<pair<int, pair<int, int>>, vector<pair<int, pair<int, int>>>, cmp> q(cmp); // {sum, path}
            for (int i = 0; i < n; ++i) {
                for (int j = 0; j < n; ++j) {
                    q.push({grid[i][j], make_pair(i, j)});
                }
            }

            vector<int> res;
            while (!q.empty()) {
                auto [sum, [ii, jj]] = q.top(); q.pop();
                if (k == 0) {
                    return {sum};
                }
                for (auto& neighbor : neighbors[ii]) {
                    int ni = neighbor.first.first, nj = neighbor.first.second;
                    int ns = sum - grid[ii][jj] + neighbor.second;
                    k--;
                    q.push({ns, neighbor.first});
                }
            }

            return {};
        }
    }
}

int mainTest() {
    vector<vector<int>> grid1 = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    cout << "{";
    for (int val : minPath(grid1, 3)) {
        cout << val << " ";
    }
    cout << "}\n";

    vector<vector<int>> grid2 = {{5, 9, 3}, {4, 1, 6}, {7, 8, 2}};
    cout << "{";
    for (int val : minPath(grid2, 1)) {
        cout << val << " ";
    }
    cout << "}\n";

    return 0;
}