def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])

    queue = [(0, 0, [])]
    visited = set((0, 0))
    path_lengths = {}

    while queue:
        x, y, path = queue.pop(0)

        if grid[x][y] == "O" and len(path) > k:
            return []

        if len(path) > k:
            return path

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if (nx, ny) not in visited and 0 <= nx < n and 0 <= ny < m:
                new_path = path + [grid[nx][ny]]

                if grid[nx][ny] != "#":
                    queue.append((nx, ny, new_path))
                    visited.add((nx, ny))

    return []