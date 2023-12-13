```cpp
vector<int> minPath(vector<vector<int>> grid, int k);

bool issame(vector<int> a, vector<int> b);

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    int row = 0;
    int col = 0;
    vector<int> path;

    for (int i = 0; i < k; i++) {
        path.push_back(grid[row][col]);

        if (i % 2 == 0) {
            if (col < N - 1) {
                col++;
            } else {
                row++;
            }
        } else {
            if (col > 0) {
                col--;
            } else {
                row++;
            }
        }
    }

    return path;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}
```