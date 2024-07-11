def minPath(grid, k):
    m = len(grid)
    visited = set()
    shortest_path = []

    def dfs(i, j, path, remaining):
        nonlocal shortest_path
        if remaining == 0:
            return
        if (i, j) in visited:
            return
        visited.add((i, j))
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            new_i, new_j = i + x, j + y
            if 0 <= new_i < m and 0 <= new_j < m:
                if grid[new_i][new_j] == k:
                    new_path = path + [grid[new_i][new_j]]
                    dfs(new_i, new_j, new_path, remaining - 1)
        visited.remove((i, j))

    for i in range(m):
        for j in range(m):
            if grid[i][j] == k:
                dfs(i, j, [grid[i][j]], k)

    return shortest_path