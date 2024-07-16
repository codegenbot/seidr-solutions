def minPath(grid, k):
    N = len(grid)

    def get_neighbors(i, j):
        neighbors = []
        if i > 0:
            neighbors.append((i - 1, j))
        if i < N - 1:
            neighbors.append((i + 1, j))
        if j > 0:
            neighbors.append((i, j - 1))
        if j < N - 1:
            neighbors.append((i, j + 1))
        return neighbors

    def dfs(i, j, visited, path, path_sum):
        if path_sum > k:
            return None
        if path_sum == k:
            return path
        visited.add((i, j))
        for ni, nj in get_neighbors(i, j):
            if (ni, nj) not in visited:
                new_path = dfs(ni, nj, visited.copy(), path + [grid[ni][nj]], path_sum + grid[ni][nj])
                if new_path:
                    return new_path
        return path if path_sum <= k else None

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, set(), [grid[i][j]], grid[i][j])
            if path:
                return path