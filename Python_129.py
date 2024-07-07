def minPath(grid, k):
    N = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    
    def dfs(i, j, path):
        if len(path) == k:
            return [grid[i][j]] + path
        visited.add((i, j))
        min_path = []
        for direction in directions:
            ni, nj = i + direction[0], j + direction[1]
            if 0 <= ni < N and 0 <= nj < N and (ni, nj) not in visited:
                new_path = dfs(ni, nj, path + [grid[i][j]])
                if not min_path or new_path < min_path:
                    min_path = new_path
        return min_path
    
    visited = set()
    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [])
            if path:
                return path