def minPath(grid, k):
    N = len(grid)
    visited = [[False]*N for _ in range(N)]
    path = []
    dfs(0, 0, grid[0][0], [], k, path)
    return path


def dfs(x, y, target, current, left, path):
    if left == 0:
        return
    N = len(current)
    if len(path) > left and current[N-1] < target:
        return
    if visited[x][y]:
        return
    visited[x][y] = True
    path.append(target)
    dfs(x-1, y, current[0], current[1:], left-1, path[:])
    dfs(x+1, y, current[0], current[1:], left-1, path[:])
    dfs(x, y-1, current[0], current[1:], left-1, path[:])
    dfs(x, y+1, current[0], current[1:], left-1, path[:])
    visited[x][y] = False