```
def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == k:
                x, y = i, j
                for _ in range(k-1):  
                    if i > 0 and grid[i-1][j] == k: i -= 1  
                    elif i < n - 1 and grid[i+1][j] == k: i += 1  
                    elif j > 0 and grid[i][j-1] == k: j -= 1  
                    elif j < n - 1 and grid[i][j+1] == k: j += 1  
                res = [x, y] + [[i, j] for i in range(x-1, x+k)]  
                return res
    return res