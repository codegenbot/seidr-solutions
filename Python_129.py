import heapq


def minPath(grid, k):
    n = len(grid)

    if any(len(row) != n for row in grid):
        return []

    queue = [(0, [], 0)]
    visited = set((0, 0))

    while queue:
        path_len, path, path_sum = heapq.heappop(queue)

        if path_sum == k:
            return path

        if len(path) > k:
            continue

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = path[-1][0] + dx, path[-1][1] + dy

            if (x, y) not in visited and 0 <= x < n and 0 <= y < n:
                heapq.heappush(
                    queue,
                    (
                        path_len + 1,
                        [i for i in path] + [[grid[x][y]]],
                        path_sum + grid[x][y],
                    ),
                )
                visited.add((x, y))

    return []