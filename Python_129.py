```
def minPath(grid, k):
    n = len(grid)
    m = [[i for _ in range(n)] for i in range(n)]
    res = []
    visited = set()
    
    def dfs(i, j, path):
        nonlocal res
        if len(path) == k:
            res = path[:]
            return True
        
        if (i, j) in visited or m[i][j] < 1:
            return False
        
        visited.add((i, j))
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                m[ni][nj] -= 1
                if dfs(ni, nj, path + [grid[i][j]]):
                    return True
                m[ni][nj] += 1
        
        visited.remove((i, j))
        return False
    
    for i in range(n):
        for j in range(n):
            if not visited and m[i][j] == k:
                dfs(i, j, [grid[i][j]])
                break
        else:
            continue
        break
    
    return res