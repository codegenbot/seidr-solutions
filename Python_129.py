```
def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return sum(path)

        visited.add((i, j))

        min_path = float('inf')
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = dfs(ni, nj, path + [m[ni][nj]], visited.copy())
                if new_path and new_path < min_path:
                    min_path = new_path

        return min_path

    for i in range(n):
        for j in range(n):
            grid[i][j] = str(grid[i][j])

    start = [i for i, row in enumerate(grid) if "1" in "".join(row)][0]
    path = dfs(start, 0, [grid[start][0]], set())

    return path