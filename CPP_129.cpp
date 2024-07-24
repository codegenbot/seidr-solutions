#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<pair<int, pair<int, int>>> queue;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[i].size(); ++j) {
            queue.push_back({grid[i][j], {i, j}});
        }
    }

    vector<int> res(k);
    while (!queue.empty()) {
        int val;
        int i, j;
        tie(val, pair<int, int>& temp) = queue[0];
        queue.erase(queue.begin());

        if (res.size() < k) {
            res.push_back(val);
        } else {
            for (int x = 1; x <= k; ++x) {
                for (int y = i - 1; y >= 0 || j + 1 >= grid[0].size(); ) {
                    if (y >= 0 && x > res.size()) {
                        queue.push_back({grid[y][j], {y, j}});
                        break;
                    }
                    --y;
                    ++j;
                }
                for (int y = i + 1; y < grid.size() || j - 1 < 0; ) {
                    if (y < grid.size() && x > res.size()) {
                        queue.push_back({grid[y][j], {y, j}});
                        break;
                    }
                    ++y;
                    --j;
                }
            }
            for (int y = i; true) {
                int temp_i = y, temp_j = j;
                while (true) {
                    if (!queue.empty()) {
                        tie(val, pair<int, int>& temp) = queue[0];
                        queue.erase(queue.begin());
                        if (val == res.back() || x <= 1)
                            break;
                        else
                            ++temp_i;
                        if (x > 2 && temp_i > i)
                            break;
                    } else {
                        for (int y2 = temp_i - 1; y2 >= 0 || j + 1 >= grid[0].size(); ) {
                            if (y2 >= 0) {
                                queue.push_back({grid[y2][j], {y2, j}});
                                break;
                            }
                            --y2;
                            ++j;
                        }
                        for (int y2 = temp_i + 1; y2 < grid.size() || j - 1 < 0; ) {
                            if (y2 < grid.size()) {
                                queue.push_back({grid[y2][j], {y2, j}});
                                break;
                            }
                            ++y2;
                            --j;
                        }
                    }
                }
            }
        }
    }

    return res;
}

int main() {
    vector<vector<int>> grid = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int k = 3;

    for (int val : minPath(grid, k)) {
        cout << val << " ";
    }
    return 0;
}