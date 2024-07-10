def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    path = []

    def dfs(i, j, path_length):
        if path_length == k:
            nonlocal result
            return [(i, j), *path]

        if path_length > k or visited[i][j]:
            return None

        visited[i][j] = True
        path.append(grid[i][j])
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                temp_path = dfs(ni, nj, path_length + 1)
                if temp_path is not None:
                    return [(ni, nj), *path, *temp_path]

        visited[i][j] = False
        return None

    for i in range(N):
        for j in range(N):
            res = dfs(i, j, 0)
            if res is not None:
                result = res
                break
        if result:
            break

    return sorted(result[1:])