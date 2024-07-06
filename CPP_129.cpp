#include <iostream>
#include <vector>
#include <climits>

using namespace std;

vector<vector<int>> minPath(vector<vector<int>> grid, int k) {
    vector<vector<int>> localGrid = grid; 
    vector<int> res;
    for (int i = 0; i < k; ++i) {
        int minVal = INT_MAX;
        int minRow = -1, minCol = -1;
        for (int j = 0; j < localGrid.size(); ++j) {
            for (int col = 0; col < localGrid[j].size(); ++col) {
                if (localGrid[j][col] <= minVal && res.empty() || (res.back() != localGrid[j][col])) {
                    minVal = localGrid[j][col];
                    minRow = j;
                    minCol = col;
                }
            }
        }
        res.push_back(minVal);
        for (int i = 0; i < localGrid.size(); ++i) {
            if (i == minRow) continue;
            localGrid[i][minCol] = INT_MAX;
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
    cout << endl;
    return 0;
}