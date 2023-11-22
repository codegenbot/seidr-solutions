def minPath(grid, k):
    m, n = len(grid), len(grid[0])
    total_elements = m * n

    if k > total_elements:
        return []

    def dfs(i, j, path, visited):
        if len(path) > k:
            return None
        if len(path) == k:
            return path
        path.append(grid[i][j])
        neighbors = []
        for ni, nj in [(i - 1, j), (i + 1, j), (i, j - 1), (i, j + 1)]:
            if 0 <= ni < m and 0 <= nj < n and (ni, nj) not in visited:
                neighbors.append((ni, nj))
        neighbors.sort(key=lambda x: abs(x[0] - i) + abs(x[1] - j))
        for neighbor in neighbors:
            ni, nj = neighbor
            visited.add((ni, nj))
            res = dfs(ni, nj, path, visited)
            if res is not None:
                return res
            visited.remove((ni, nj))
        path.pop()
        return None

    for i in range(m):
        for j in range(n):
            visited = set([(i, j)])
            res = dfs(i, j, [grid[i][j]], visited)
            if res is not None and len(res) == k:
                return res
    return []