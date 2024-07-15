def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                res.append(1)
                temp = [(i, j)]
                while len(temp) < k:
                    x, y = temp[-1]
                    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
                    for dx, dy in directions:
                        nx, ny = x + dx, y + dy
                        if 0 <= nx < n and 0 <= ny < n and grid[nx][ny] not in temp:
                            temp.append((nx, ny))
                            res.append(grid[nx][ny])
                            break
                    else:
                        continue
                return res