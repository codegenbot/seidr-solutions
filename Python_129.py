def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    path = []
    def dfs(i, j, p):
        nonlocal path
        if len(p) == k:
            return p
        visited[i][j] = True
        min_val = float('inf')
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i+x, j+y
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                val = grid[ni][nj]
                p.append(val)
                res = dfs(ni, nj, p[:])
                if len(res) == k:
                    return res
                p.pop()
        visited[i][j] = False
        return []
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [])
            if path:
                return path