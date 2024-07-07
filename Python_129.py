```
def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    path = []

    def dfs(i, j, curr_path):
        nonlocal path
        if len(curr_path) == k:
            path = curr_path[:]
            return True
        
        if len(curr_path) > k or i < 0 or i >= n or j < 0 or j >= n or visited[i][j]:
            return False

        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i+x, j+y
            if 0 <= ni < n and 0 <= nj < n:
                if dfs(ni, nj, curr_path+[grid[ni][nj]]):
                    return True

        visited[i][j] = True
        return False

    for i in range(n):
        for j in range(n):
            dfs(i, j, [grid[i][j]])

    return path