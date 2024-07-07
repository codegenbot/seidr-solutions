def minPath(grid, k):
    N = len(grid)
    res = []
    visited = [[False] * N for _ in range(N)]

    def dfs(i, j, path):
        nonlocal res
        if len(path) == k:
            res = sorted(path)
            return True

        visited[i][j] = True
        path.append(grid[i][j])

        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        for d in directions:
            ni, nj = i + d[0], j + d[1]
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                if dfs(ni, nj, path[:]):
                    return True
        visited[i][j] = False
        path.pop()
        return False

    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                if dfs(i, j, []):
                    return res

    return []