def minPath(grid, k):
    m = len(grid)
    visited = set()
    shortest_path = None
    min_length = float('inf')

    def dfs(i, j, path, remaining, directions):
        nonlocal shortest_path, min_length
        if remaining == 0:
            if len(path) < min_length:
                min_length = len(path)
                shortest_path = (path, directions[:])
            return
        if (i, j) in visited:
            return
        visited.add((i, j))
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            new_i, new_j = i + x, j + y
            if 0 <= new_i < m and 0 <= new_j < m:
                new_path = path + [grid[new_i][new_j]]
                new_directions = directions + [(x, y) if (i, j) != (new_i, new_j) else []]
                dfs(new_i, new_j, new_path, remaining - 1, new_directions)
        visited.remove((i, j))

    for i in range(m):
        for j in range(m):
            dfs(i, j, [], k, [])

    return shortest_path