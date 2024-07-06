def minPath(grid, k):
    min_path = []
    min_len = float("inf")

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] != 1:
                continue

            queue = [(i, j)]

            while queue and len(queue) <= k:
                x, y = queue.pop(0)

                if grid[x][y] == k:
                    min_path = [(i, j)] + queue
                    min_len = len(queue)
                    break

                for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                    nx, ny = x + dx, y + dy
                    if 0 <= nx < len(grid) and 0 <= ny < len(grid[i]):
                        queue.append((nx, ny))

    if min_path and len(min_path) > k:
        return None

    return min_path