def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    visited = set()
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    path = []

    def dfs(x, y):
        if k == 0:
            return True
        if (x, y) in visited or m[x][y] not in path:
            return False

        path.append(m[x][y])
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 1 <= nx < n and 1 <= ny < n:
                if dfs(nx, ny):
                    return True
        visited.add((x, y))
        path.pop()
        return False

    for i in range(n):
        for j in range(n):
            if not visited:
                if dfs(i, j):
                    return path
    return []