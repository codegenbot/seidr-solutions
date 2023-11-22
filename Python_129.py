def minPath(grid, k):
    m, n = len(grid), len(grid[0])
    total_elements = m * n

    if k > total_elements:
        return []

    def dfs(i, j, path):
        if len(path) == k:
            return path
        if len(path) > k:
            return None
        path.append(grid[i][j])
        neighbors = []
        if i > 0:
            neighbors.append((i - 1, j))
        if i < m - 1:
            neighbors.append((i + 1, j))
        if j > 0:
            neighbors.append((i, j - 1))
        if j < n - 1:
            neighbors.append((i, j + 1))
        neighbors.sort(key=lambda x: grid[x[0]][x[1]])
        for neighbor in neighbors:
            ni, nj = neighbor
            if (ni, nj) not in visited:
                visited.add((ni, nj))
                res = dfs(ni, nj, path)
                if res is not None:
                    return res
                visited.remove((ni, nj))
        path.pop()
        return None

    visited = set()
    for i in range(m):
        for j in range(n):
            visited.add((i, j))
            res = dfs(i, j, [grid[i][j]])
            if res is not None and len(res) <= k:
                return res
            visited.remove((i, j))
    return []