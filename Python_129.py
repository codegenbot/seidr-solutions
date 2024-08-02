def minPath(grid, k):
    n = len(grid)
    memo = set()
    
    def dfs(i, j, path):
        if (i, j) in memo:
            return []
        memo.add((i, j))
        new_path = path + [grid[i][j]]
        
        if len(new_path) == k:
            return [new_path]
        res = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and grid[ni][nj] == 1 and (ni, nj) not in memo:
                res.extend(dfs(ni, nj, new_path))
        return res
    
    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                return sum(dfs(i, j, []) for _ in range(k), [])