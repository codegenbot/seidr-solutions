def minPath(grid, k):
    def dfs(i, j, path, visited):
        if len(path) == k + 1:
            return path
        path.append(grid[i][j])
        visited[i][j] += 1
        neighbors = []
        if i > 0:
            neighbors.append((i - 1, j))
        if i < len(grid) - 1:
            neighbors.append((i + 1, j))
        if j > 0:
            neighbors.append((i, j - 1))
        if j < len(grid[0]) - 1:
            neighbors.append((i, j + 1))
        neighbors.sort(key=lambda x: grid[x[0]][x[1]])
        for neighbor in neighbors:
            ni, nj = neighbor
            if visited[ni][nj] < k and grid[ni][nj] not in path:
                result = dfs(ni, nj, path, visited)
                if result:
                    return result
        path.pop()
        visited[i][j] -= 1

    n, m = len(grid), len(grid[0])
    visited = [[0] * m for _ in range(n)]

    for i in range(n):
        for j in range(m):
            result = dfs(i, j, [], visited)
            if result:
                return result