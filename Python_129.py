def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    visited = [[False] * n for _ in range(n)]
    order = [i for i in range(1, n*n+1)]
    res = []

    def dfs(x, y):
        nonlocal res
        if len(res) == k:
            return True
        if (x, y) in [(i//n, i%n) for i in set().union(*[set(map(tuple, [list(visited[i]) for i in range(n*n)])))]) or visited[x][y]:
            return False
        visited[x][y] = True
        res.append(grid[x][y])
        for dx, dy in directions:
            nx, ny = x+dx, y+dy
            if 0 <= nx < n and 0 <= ny < n and not visited[nx][ny]:
                dfs(nx, ny)
                if len(res) == k:
                    return True
                visited[x][y] = False
        res.pop()
        return False

    for i in range(n):
        for j in range(n):
            if dfs(i, j):
                return res