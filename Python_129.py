def minPath(grid, k):
    n = len(grid)
    m = [(i, j) for i in range(n) for j in range(n)]
    res = []
    path = [0]
    
    def dfs(i, j, p):
        nonlocal res
        if len(p) == k:
            res = p
            return
        for di, dj in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in m[:i] + [(i, j)] + m[i+1:]:
                m.remove((ni, nj))
                dfs(ni, nj, p + [grid[ni][nj]])
                m.append((ni, nj))

    for i in range(n):
        for j in range(n):
            if (i, j) not in m[:]:
                m.remove((i, j))
                dfs(i, j, [grid[i][j]])
                break
    return res