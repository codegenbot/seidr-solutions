def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    
    def dfs(i, j, path, visited):
        if len(path) == k:
            return sum(path), path
        visited.add((i, j))
        min_path = None
        total_value = float('inf')
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = dfs(ni, nj, path + [m[ni][nj]], visited.copy())
                if new_path[0] < total_value or min_path is None:
                    total_value = new_path[0]
                    min_path = new_path[1]
        return total_value, min_path
    
    min_path = None
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [], set())
            if min_path is None or path[0] < min_path[0]:
                min_path = path[1]
    return min_path