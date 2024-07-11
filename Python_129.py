Here is the solution:

def minPath(grid, k):
    N = len(grid)
    visited = [[False for _ in range(N)] for _ in range(N)]
    paths = []
    def dfs(i, j, path, length):
        if length == k:
            paths.append(path[:])
            return
        if length > k or visited[i][j]:
            return 
        visited[i][j] = True
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < N and 0 <= nj < N:
                dfs(ni, nj, path + [grid[ni][nj]], length + 1)
        visited[i][j] = False

    for i in range(N):
        for j in range(N):
            dfs(i, j, [grid[i][j]], 0)

    return min(paths)