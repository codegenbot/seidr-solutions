def minPath(grid, k):
    n = len(grid)

    queue = [(0, 0, [])]
    visited = set((0, 0))
    path_lengths = {}

    while True:
        x, y, path = queue.pop(0)

        while len(path) < k:
            for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                nx, ny = x + dx, y + dy

                if (nx, ny) not in visited and 0 <= nx < n and 0 <= ny < n:
                    new_path = path + [grid[nx][ny]]

                    if (
                        len(new_path) not in path_lengths
                        or len(new_path) < path_lengths[len(new_path)]
                    ):
                        queue.append((nx, ny, new_path))
                        visited.add((nx, ny))
                        path_lengths[len(new_path)] = len(new_path)

        return [path]