def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]
    visited = [[False for _ in range(n)] for _ in range(n)]

    def dfs(i, j, path, count):
        if count == k:
            return [path]

        paths = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if (
                0 <= ni < n
                and 0 <= nj < n
                and not visited[ni][nj]
                and m[ni][nj] > m[i][j]
            ):
                visited[ni][nj] = True
                paths.extend(dfs(ni, nj, path + [m[ni][nj]], count + 1))
                visited[ni][nj] = False

        return paths

    min_path = []
    for i in range(n):
        for j in range(n):
            if not visited[i][j]:
                visited[i][j] = True
                paths = dfs(i, j, [m[i][j]], 1)
                visited[i][j] = False
                if not min_path or paths < min_path:
                    min_path = paths

    return min_path[0]