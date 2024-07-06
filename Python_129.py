
def minPath(grid, k):
    """
    Given a grid of size n x m and a number k, find the minimum cost path from (0, 0) to (n-1, m-1).
    The cost of a path is calculated by summing the values of the cells through which it passes.
    """
    
    # Initialize a 2D array dp with size n x m and fill it with infinity
    dp = [[float("inf") for _ in range(m)] for _ in range(n)]
    dp[0][0] = grid[0][0]

    # Loop through the grid and calculate the minimum cost path at each cell
    for i in range(1, n):
        for j in range(m):
            if i == 0 and j == 0:
                continue
            dp[i][j] = min(dp[i-1][j], dp[i][j-1]) + grid[i][j]
    
    # Return the minimum cost path
    return dp[-1][-1]
