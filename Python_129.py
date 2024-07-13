```
def shortestPaths(grid, k): 
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    
    def dfs(i, j, path, visited, length):
        if len(path) == k:
            return [path]
        visited.add((i, j))
        result = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = dfs(ni, nj, path + [m[ni][nj]], visited.copy(), length + 1)
                if new_path:
                    result += new_path
        return result

    result = []
    for i in range(n):
        for j in range(n):
            paths = dfs(i, j, [], set(), 0)
            if paths and (not result or max(map(len, paths)) < max(map(len, result))):
                result = paths
    return min(result) if result else []