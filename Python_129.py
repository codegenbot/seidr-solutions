def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    path = []

    def dfs(i, j, remain):
        nonlocal path
        if remain == 0:
            return [grid[i][j]]
        visited[i][j] = True
        res = []
        for direction in directions:
            ni, nj = i + direction[0], j + direction[1]
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                temp_path = dfs(ni, nj, remain - 1)
                if len(temp_path) == k:
                    res.append([grid[i][j]] + temp_path)
        visited[i][j] = False
        return min(res, key=lambda x: (x.index(grid[i][j]), x))

    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                path = dfs(i, j, k)
                break
        else:
            continue
        break

    return path[0]