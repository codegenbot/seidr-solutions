def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]
    
    memo = {}
    
    def dfs(i, j, path, cnt):
        if (i, j) in memo:
            return memo[(i, j)]
        
        if cnt == k:
            return path
        
        res = []
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 1 <= ni < n and 1 <= nj < n and (ni, nj) not in memo:
                res.append(dfs(ni, nj, path + [m[ni][nj]], cnt + 1))
        
        if len(res) > 0:
            res.sort()
            memo[(i, j)] = res[0]
            return memo[(i, j)]
        else:
            return []
    
    min_path = []
    for i in range(1, n):
        for j in range(n):
            if (i, j) not in memo:
                min_path = dfs(i, j, [], 0)
                break
        else:
            continue
        break
    
    return min_path