#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    vector<int> res;
    int n = grid.size();
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (k == 1) {
                res.push_back(grid[i][j]);
                return res;
            }
            int val = grid[i][j];
            grid[i][j] = -1;
            vector<int> temp;
            for (int m = i-1; m <= i+1 && m >= 0 && m < n; ++m) {
                for (int p = j-1; p <= j+1 && p >= 0 && p < n; ++p) {
                    if (grid[m][p] != -1) {
                        temp.push_back(grid[m][p]);
                    }
                }
            }
            sort(temp.begin(), temp.end());
            bool found = false;
            for (int m = 0; m < temp.size(); ++m) {
                if (temp[m] == val) {
                    res.push_back(val);
                    --k;
                    found = true;
                    break;
                } else if (!found && k > 1) {
                    res.push_back(temp[m]);
                    --k;
                }
            }
            if (!found) {
                res.push_back(val);
                --k;
            }
        }
    }
    return res;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> result = minPath(grid, k);
    for (auto val : result) {
        cout << val << " ";
    }
    return 0;
}