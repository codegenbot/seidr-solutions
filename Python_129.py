def minPath(grid, k):
    n = len(grid)
    visited = set()
    path_sum = float("inf")
    shortest_path = []

    def dfs(i, j, p, s):
        nonlocal path_sum, shortest_path
        if len(p) == k:
            if s < path_sum:
                path_sum = s
                shortest_path = [p]
            elif s == path_sum:
                shortest_path.append(p)
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