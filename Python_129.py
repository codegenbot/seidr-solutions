```
def minPath(grid, k):
    N = len(grid)
    visited = [[False]*N for _ in range(N)]
    path = []
    min_path = []

    def dfs(i, j, cur_path, cur_sum):
        nonlocal min_path
        if len(cur_path) == k:
            if not min_path or cur_sum < sum(min_path):
                min_path = list(cur_path)
            return
        visited[i][j] = True
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i+x, j+y
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                dfs(ni, nj, cur_path+[grid[i][j]], cur_sum+grid[i][j])
        visited[i][j] = False

    for i in range(N):
        for j in range(N):
            if not visited[i][j]:
                dfs(i, j, [grid[i][j]], grid[i][j])

    return min_path