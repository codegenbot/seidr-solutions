```
def minPath(grid, k):
    N = len(grid)
    res = []

    def dfs(i, j, path_len, total_cost):
        nonlocal res
        if path_len == k:
            res.append(list(total_cost))
            return
        if i < 0 or i >= N or j < 0 or j >= N:
            return
        if (i, j) in visited: 
            return
        visited.add((i, j))
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < N and 0 <= nj < N:
                if grid[ni][nj] > grid[i][j]:
                    dfs(
                        ni,
                        nj,
                        path_len + 1,
                        total_cost + [grid[ni][nj], grid[i][j]]
                    )

    visited = set()
    for i in range(N):
        for j in range(N):
            dfs(i, j, 0, [grid[i][j]])
    return res