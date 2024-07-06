import heapq


def minPath(grid, k):
    n = len(grid)
    queue = [(0, (0, 0, []))]
    visited = set((0, 0))
    path_lengths = {}
    shortest_paths = {}

    while queue:
        _, (x, y, path) = heapq.heappop(queue)

        if len(path) == k:
            return path

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if (nx, ny) not in visited and 0 <= nx < n and 0 <= ny < n:
                new_path = path + [grid[nx][ny]]

                if (
                    len(new_path) not in shortest_paths
                    or len(new_path) < shortest_paths[len(new_path)]
                ):
                    heapq.heappush(queue, (len(new_path), (nx, ny, new_path)))
                    visited.add((nx, ny))
                    shortest_paths[len(new_path)] = len(new_path)

    return []