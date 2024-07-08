#include <vector>
#include <cassert>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] == k) {
                result.push_back(i);
                result.push_back(j);
            }
        }
    }
    return result;
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), vector<int>({{1, 3, 1, 3, 1, 3, 1, 3, 1, 3}})));
    return 0;
}