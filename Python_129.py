def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path, k, visited, total_cost):
        if k == 0:
            return total_cost
        visited.add((i, j))
        min_cost = None
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_cost = grid[ni][nj] + dfs(
                    ni,
                    nj,
                    path + [m[ni][nj]],
                    k - 1,
                    visited,
                    total_cost + grid[ni][nj],
                )
                if min_cost is None or new_cost < min_cost:
                    min_cost = new_cost
        return min_cost

    visited = set()
    return dfs(0, 0, [], k, visited, 0)