def minPath(grid, k):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    result = []

    def dfs(i, j, path):
        nonlocal visited
        if len(path) == k:
            return path

        visited[i][j] = True
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        for dx, dy in directions:
            ni, nj = i + dx, j + dy
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                path.append(grid[ni][nj])
                new_path = dfs(ni, nj, path)
                if new_path:
                    return new_path
                path.pop()
        visited[i][j] = False
        return []

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [grid[i][j]])
            if path and len(path) == k:
                result = path
                break

    return result