```cpp
#include <iostream>
#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> result;
    for (int i = 0; i < grid[0].size(); ++i) {
        bool found = false;
        for (int j = 0; j < grid.size(); ++j) {
            if (grid[j][i] == k) {
                found = true;
                result.push_back(k);
                break;
            }
        }
        if (!found) return vector<int>(); // No path found
    }
    return result;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (auto val : result) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}