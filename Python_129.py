def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(i, j, path, total, current_path):
        if i == n - 1 and j == n - 1:
            if total == k:
                res.append(current_path + [grid[i][j]])
        visited[i][j] = True
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, path + [grid[i][j]], total + grid[i][j], current_path)
                if len(new_path) > 0:
                    return new_path
        visited[i][j] = False
        return []

    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                temp = dfs(i, j, [], grid[i][j], [])
                if temp:
                    res.extend(temp)

    return [x for sublist in res for x in sublist]