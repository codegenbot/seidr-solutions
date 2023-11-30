def minPath(grid, k):
    def backtrack(i, j, path, remain, visited):
        if remain[i][j] < 0:
            return None
        if remain[i][j] == 0:
            return path
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if (
                0 <= ni < len(grid)
                and 0 <= nj < len(grid[0])
                and grid[ni][nj] != -1
                and (ni, nj) not in visited
            ):
                new_visited = visited.copy()
                new_visited.add((ni, nj))

                remain[ni][nj] = remain[i][j] - 1

                new_path = backtrack(ni, nj, path + [(ni, nj)], remain, new_visited)
                if new_path:
                    return new_path
        return None

    n = len(grid)
    m = len(grid[0])
    remain = [[k] * m for _ in range(n)]

    for i in range(n):
        for j in range(m):
            if grid[i][j] != -1:
                visited = {(i, j)}
                remain[i][j] -= 1
                path = backtrack(i, j, [(i, j)], remain, visited)
                if path is not None and len(path) == k:
                    return [grid[x][y] for x, y in path]
    return []