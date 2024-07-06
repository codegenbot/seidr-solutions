def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])

    queue = [(i, j) for i in range(n) for j in range(m)]
    visited = set()
    path_lengths = {}
    shortest_paths = {}
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    while queue:
        x, y = queue.pop(0)

        if grid[x][y] in shortest_paths:
            for dx, dy in directions:
                nx, ny = x + dx, y + dy

                if (nx, ny) not in visited and 0 <= nx < n and 0 <= ny < m:
                    new_path = list(shortest_paths[grid[x][y]] + [grid[nx][ny]])
                    queue.append((nx, ny))
                    visited.add((nx, ny))
                    path_lengths[tuple(new_path)] = len(new_path)

        if (x, y) not in visited and 0 <= x < n and 0 <= y < m:
            visited.add((x, y))

            for dx, dy in directions:
                nx, ny = x + dx, y + dy

                if (nx, ny) not in visited and 0 <= nx < n and 0 <= ny < m:
                    queue.append((nx, ny))
                    visited.add((nx, ny))

    return [x for x in path_lengths if len(x) <= k]