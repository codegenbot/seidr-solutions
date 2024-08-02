```
def minPath(grid, k):
    n = len(grid)
    res = []
    visited = set()

    def dfs(i, j, path):
        if len(path) == k:
            nonlocal res
            res.append(sorted(path))
            return True
        if (i, j) in visited or grid[0][j] not in path:
            return False
        for x, y in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                visited.add((i, j))
                path.append(grid[0][j])
                if dfs(ni, nj, path):
                    return True
                path.pop()
                visited.remove((i, j))
        return False

    for i in range(n):
        res = []
        visited = set()
        dfs(i, 0, [])
        if res:
            return min(res)
    return []