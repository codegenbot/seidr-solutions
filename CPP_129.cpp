#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k);

bool compareVectors(vector<int>& v1, vector<int>& v2) {
    if (v1.size() != v2.size()) {
        return false;
    }

    for (int i = 0; i < v1.size(); ++i) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    assert(compareVectors(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));

    return 0;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<int> result;
    int row = 0, col = 0;
    for (int i = 0; i < k; ++i) {
        result.push_back(grid[row][col]);
        if ((row + col) % 2 == 0) {
            if (col == n - 1) {
                row++;
            } else if (row == 0) {
                col++;
            } else {
                row--;
                col++;
            }
        } else {
            if (row == n - 1) {
                col++;
            } else if (col == 0) {
                row++;
            } else {
                row++;
                col--;
            }
        }
    }
    return result;
}