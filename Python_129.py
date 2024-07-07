def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    
    def dfs(i, j, path):
        if len(path) == k:
            return [path]
        
        visited.add((i, j))
        paths = []
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = path + [grid[ni][nj]]
                paths.extend(dfs(ni, nj, new_path))
        return paths
    
    visited = set()
    min_path = []
    for i in range(n):
        for j in range(n):
            if (i, j) not in visited:
                paths = dfs(i, j, [grid[i][j]])
                if not min_path or sorted(min_path)[0] > sorted(paths[0])[0]:
                    min_path = paths[0]
    return min_path