#include <vector>

using namespace std;

bool same(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> findKPositions(vector<vector<int>> grid, int k) {
    vector<int> result;
    for (int i = 0; i < grid.size(); ++i) {
        for (int j = 0; j < grid[0].size(); ++j) {
            if (grid[i][j] == k) {
                result.push_back(i);
                result.push_back(j);
                for (int p = 0; p < 10; ++p) {
                    result.push_back(k);
                }
            }
        }
    }
    return result;
}

int main() {
    assert(same(findKPositions({{1, 3}, {3, 2}}, 10), vector<int>({1, 3, 1, 3, 1, 3, 1, 3, 1, 3})));
    return 0;
}