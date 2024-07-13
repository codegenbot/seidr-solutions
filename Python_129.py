def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]
    
    def dfs(x, y, visited, path):
        if len(path) == k:
            return path
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and m[nx][ny] == 0:
                for i in range(k):
                    m[grid[x][y]][i], m[nx][ny][i] = m[nx][ny][i], m[grid[x][y]][i]
                res = dfs(nx, ny, visited | (1 << (nx * n + ny)), path + [m[nx][ny]])
                for i in range(k):
                    m[grid[x][y]][i], m[nx][ny][i] = m[nx][ny][i], m[grid[x][y]][i]
                if res:
                    return res
        return None
    
    min_path = []
    for x in range(n):
        for y in range(n):
            visited = 0
            path = [m[x][y]]
            res = dfs(x, y, visited, path)
            if not min_path or res < min_path:
                min_path = res
    return min_path