```
def minPath(grid, k):
    n = len(grid)
    visited = set()
    path = []
    min_sum = float('inf')

    def dfs(i, j, p, s):
        nonlocal min_sum
        if len(p) == k:
            if s < min_sum:
                min_sum = s
                return [p]
            elif s == min_sum:
                return [p]
            else:
                return []
        if (i, j) in visited:
            return []
        visited.add((i, j))
        res = []
        for x, y in [(0, 1), (1, 0), (0, -1), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                res += dfs(ni, nj, p + [grid[ni][nj]], s + grid[ni][nj])
        return res

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            for p in dfs(i, j, [], 0):
                if len(p) == k:
                    return sorted(p)
    return []