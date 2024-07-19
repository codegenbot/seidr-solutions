#include <vector>
#include <cassert>
#include <algorithm>

bool issame(std::vector<int> a, std::vector<int> b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

std::vector<int> minPath(std::vector<std::vector<int>> grid, int k) {
    int rows = grid.size();
    int cols = grid[0].size();
    
    std::vector<std::vector<int>> dp(rows, std::vector<int>(cols, INT_MAX));
    dp[0][0] = grid[0][0];

    for (int move = 0; move <= k; ++move) {
        std::vector<std::vector<int>> dp_temp(rows, std::vector<int>(cols, INT_MAX));
        
        for (int r = 0; r < rows; ++r) {
            for (int c = 0; c < cols; ++c) {
                if (r > 0) {
                    dp_temp[r][c] = std::min(dp_temp[r][c], dp[r - 1][c] + grid[r][c]);
                }
                if (c > 0) {
                    dp_temp[r][c] = std::min(dp_temp[r][c], dp[r][c - 1] + grid[r][c]);
                }
                if (r < rows - 1) {
                    dp_temp[r][c] = std::min(dp_temp[r][c], dp[r + 1][c] + grid[r][c]);
                }
                if (c < cols - 1) {
                    dp_temp[r][c] = std::min(dp_temp[r][c], dp[r][c + 1] + grid[r][c]);
                }
            }
        }

        dp = dp_temp;
    }

    return std::vector<int>(dp.back().begin(), dp.back().end());
}

int main() {
    assert(issame(minPath({{1, 3}, {3, 2}}, 10), {1, 3, 1, 3, 1, 3, 1, 3, 1, 3}));
    return 0;
}