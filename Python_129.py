def minPath(grid, k):
    m, n = len(grid), len(grid[0])
    total_elements = m * n

    if k > total_elements:
        repeats = k // total_elements
        remainder = k % total_elements
        path = []

        for _ in range(repeats):
            path.extend(grid[i][j] for i in range(m) for j in range(n))

        if remainder > 0:
            path.extend(
                grid[i][j] for i in range(remainder // n) for j in range(remainder % n)
            )

        if len(path) == k:
            return path

    def dfs(i, j, path, visited):
        if len(path) == k:
            return path.copy()
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