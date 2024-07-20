#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int N = grid.size();
    vector<vector<int>> dp(N, vector<int>(N));
    vector<vector<bool>> visited(N, vector<bool>(N));

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == 0 && j == 0) {
                dp[i][j] = grid[i][j];
            } else if (i > 0 && j == 0) {
                dp[i][j] = min({dp[i-1][j], dp[i-1][j+1]});
            } else if (i == 0) {
                dp[i][j] = min({dp[i][j-1], dp[i][j+1]});
            } else {
                dp[i][j] = min({dp[i-1][j], dp[i-1][j+1], dp[i][j-1], dp[i][j+1]});
            }
        }
    }

    vector<int> res;
    int i = N - 1, j = N - 1;
    while (k > 0) {
        if (!visited[i][j]) {
            visited[i][j] = true;
            res.push_back(grid[i][j]);
            k--;
        }
        if (i > 0 && !visited[i-1][j]) {
            i--;
        } else if (j > 0 && !visited[i][j-1]) {
            j--;
        } else {
            if (i > 0) i--;
            else j--;
        }
    }

    return res;
}

int main() {
    vector<vector<int>> grid = {{5,9,3},{4,1,6},{7,8,2}};
    int k = 1;
    vector<int> res = minPath(grid, k);
    for (int i : res) {
        cout << i << " ";
    }
    return 0;
}