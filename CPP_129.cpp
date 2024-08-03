#include <iostream>
#include <vector>
using namespace std;

vector<int> minPath(vector<vector<int>> grid, int k) {
    int n = grid.size();
    vector<vector<int>> dp(n, vector<int>(n));
    
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < n; ++j)
            dp[i][j] = grid[i][j];
    
    vector<int> res;
    int x = 0, y = 0;
    
    for (int i = 1; i <= k; ++i) {
        if ((x == 0 || x == n - 1) && (y == 0 || y == n - 1)) {
            // corner case
            int dx[] = {0, 0, 1, -1};
            int dy[] = {1, -1, 0, 0};
            for (int j = 0; j < 4; ++j) {
                int nx = x + dx[j];
                int ny = y + dy[j];
                if (nx >= 0 && nx < n && ny >= 0 && ny < n)
                    dp[x][y] = min({dp[nx][ny], dp[(x+dx[3-j]) % n][ny], dp[x][(ny+dy[3-j]) % n]});
            }
        } else if (x == 0 || x == n - 1) {
            // edge case
            int dx[] = {0, 0, 1, -1};
            for (int j = 0; j < 4; ++j) {
                int nx = x + dx[j];
                if (nx >= 0 && nx < n)
                    dp[x][y] = min({dp[nx][ny], dp[(x+dx[3-j]) % n][ny]});
            }
        } else if (y == 0 || y == n - 1) {
            // edge case
            int dy[] = {0, 0, 1, -1};
            for (int j = 0; j < 4; ++j) {
                int ny = y + dy[j];
                if (ny >= 0 && ny < n)
                    dp[x][y] = min({dp[x][ny], dp[x][(y+dy[3-j]) % n]});
            }
        } else {
            // normal case
            int dx[] = {0, 1, -1};
            int dy[] = {1, 0, 0};
            for (int j = 0; j < 3; ++j) {
                int nx = x + dx[j];
                int ny = y + dy[j];
                if (nx >= 0 && nx < n && ny >= 0 && ny < n)
                    dp[x][y] = min({dp[nx][ny], dp[(x+dx[2-j]) % n][ny], dp[x][(ny+dy[2-j]) % n]});
            }
        }
        
        res.push_back(dp[x][y]);
        if (i < k) {
            int dx[] = {0, 1, -1};
            int dy[] = {1, 0, 0};
            for (int j = 0; j < 3; ++j) {
                int nx = x + dx[j];
                int ny = y + dy[j];
                if (nx >= 0 && nx < n && ny >= 0 && ny < n)
                    if (dp[x][y] == dp[nx][ny])
                        break;
            }
            x = nx, y = ny;
        }
    }
    
    return res;
}

int main() {
    vector<vector<int>> grid = {{1,2,3}, {4,5,6}, {7,8,9}};
    int k = 3;
    vector<int> res = minPath(grid, k);
    for (auto x : res)
        cout << x << " ";
    return 0;
}