Here is the Python solution for the given problem:

```
def minPath(grid, k):
    n = len(grid)
    visited = [[False]*n for _ in range(n)]
    path = []
    directions = [(0,1), (0,-1), (1,0), (-1,0)]

    def dfs(i, j, current_path):
        nonlocal path
        if len(current_path) == k:
            path = current_path
            return True
        visited[i][j] = True
        for direction in directions:
            ni, nj = i + direction[0], j + direction[1]
            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                dfs(ni, nj, current_path + [grid[ni][nj]])
        visited[i][j] = False
        return False

    for i in range(n):
        for j in range(n):
            if dfs(i, j, [grid[i][j]]):
                break
        else:
            continue
        break

    return path