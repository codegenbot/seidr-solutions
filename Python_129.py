```
def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    path = []
    def dfs(i, j, curr_path):
        nonlocal path
        if len(curr_path) == k:
            return True
        if not visited[i][j] or len(curr_path) >= k:
            return False
        visited[i][j] = True
        for x, y in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
            if 0 <= x < n and 0 <= y < n:
                curr_path.append(grid[x][y])
                if dfs(x, y, curr_path):
                    path = curr_path[:]
                    return True
                curr_path.pop()
        visited[i][j] = False
        return False

    for i in range(n):
        for j in range(n):
            dfs(i, j, [])
    return path