#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); ++i) {
        vector<int> row_indices;
        for (int j = 0; j < lst[i].size(); ++j) {
            if (lst[i][j] == x) {
                row_indices.push_back(j);
            }
        }
        sort(row_indices.rbegin(), row_indices.rend());
        for (int idx : row_indices) {
            result.push_back({i, idx});
        }
    }
    return result;
}

bool issame(vector<vector<int>> a, vector<vector<int>> b) {
    return a == b;
}

int main() {
    assert(issame(get_row({{}, {1}, {1, 2, 3}}, 3), {{2, 2}}));
    return 0;
}