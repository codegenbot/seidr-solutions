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

            def minPathRec(start_x, start_y, end_x, end_y):
                if start_x == end_x and start_y == end_y:
                    return []

                queue = [(start_x, start_y)]

                while queue:
                    x, y = queue.pop(0)

                    if grid[x][y] == 1:
                        continue

                    for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                        nx, ny = x + dx, y + dy
                        if 0 <= nx < len(grid) and 0 <= ny < len(grid[i]):
                            queue.append((nx, ny))

                return minPathRec(start_x, start_y, end_x, end_y)

            min_len = len(minPathRec(i, j, i + 1, j + 1))

    return min_path