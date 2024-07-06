```
def minPath(grid, k):
    n = len(grid)
    res = []
    for i in range(n):
        for j in range(n):
            visited = [[False] * n for _ in range(n)]
            path = [grid[i][j]]

            def dfs(i, j, current_path):
                nonlocal path
                if len(current_path) == k:
                    if not res or sum(current_path) < sum(res[0]):
                        res = [current_path]
                    elif sum(current_path) == sum(res[0]):
                        res.append(current_path)
                    return

                for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
                    ni, nj = i + x, j + y
                    if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                        visited[ni][nj] = True
                        dfs(ni, nj, current_path + [grid[ni][nj]])
                        visited[ni][nj] = False

            visited[i][j] = True
            dfs(i, j, path)
            visited[i][j] = False

    return res[0] if res else []