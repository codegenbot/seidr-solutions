def minPath(grid, k):
    n = len(grid)
    res = []

    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                queue = [(i, j)]
                visited = {(i, j)}
                path = [grid[i][j]]

                while queue and len(path) < k:
                    x, y = queue.pop(0)
                    for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                        nx, ny = x + dx, y + dy
                        if (nx, ny) not in visited and 0 <= nx < n and 0 <= ny < n:
                            queue.append((nx, ny))
                            visited.add((nx, ny))
                            path.append(grid[nx][ny])
                            if len(path) == k:
                                return sorted(path)
    return []