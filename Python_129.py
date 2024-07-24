def minPath(grid, k):
    N = len(grid)
    for i in range(N):
        grid[i] = list(map(lambda x: str(x), grid[i]))
    
    def dfs(i, j, path, visited, cnt):
        if cnt == k:
            return path
        visited.add((i, j))
        min_path = None
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            new_i, new_j = i + x, j + y
            if 0 <= new_i < N and 0 <= new_j < N and (new_i, new_j) not in visited:
                new_path = dfs(new_i, new_j, path + [grid[new_i][new_j]], visited.copy(), cnt+1)
                if min_path is None or ''.join(sorted(new_path)) < ''.join(sorted(min_path)):
                    min_path = new_path
        return min_path

    min_path = None
    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [grid[i][j]], set(), 1)
            if min_path is None or ''.join(sorted(path)) < ''.join(sorted(min_path)):
                min_path = path
    
    return min_path