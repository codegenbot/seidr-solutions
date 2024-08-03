```
def minPath(grid, k):
    N = len(grid)
    visited = [[False]*N for _ in range(N)]
    queue = [(0, 0, [grid[0][0]])]
    result = None
    while queue:
        i, j, path = queue.pop(0)
        if len(path) == k + 1:
            if not result or path < result:
                result = path
        for ni, nj in [(i-1, j), (i+1, j), (i, j-1), (i, j+1)]:
            if 0 <= ni < N and 0 <= nj < N and not visited[ni][nj]:
                visited[ni][nj] = True
                queue.append((ni, nj, path + [grid[ni][nj]]))
    return result