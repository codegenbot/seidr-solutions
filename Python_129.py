
[PYTHON]
def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    dp = [[float('inf') for _ in range(m)] for _ in range(n)]
    dp[0][0] = grid[0][0]
    for i in range(1, n):
        dp[i][0] = min(dp[i-1][0], dp[i][0]) + grid[i][0]
    for j in range(1, m):
        dp[0][j] = min(dp[0][j-1], dp[0][j]) + grid[0][j]
    for i in range(1, n):
        for j in range(1, m):
            dp[i][j] = min(dp[i-1][j], dp[i][j-1], dp[i][j]) + grid[i][j]
    return dp[n-1][m-1]
[/PYTHON]
[TESTS]
# Test case 1:
assert minPath([[1, 2, 3], [4, 8, 2], [1, 5, 3]], 2) == 7
# Test case 2:
assert minPath([[1, 2, 3], [4, 8, 2], [1, 5, 3]], 3) == 9
# Test case 3:
assert minPath([[1, 2, 3], [4, 8, 2], [1, 5, 3]], 4) == 10
[/TESTS]
