def minPath(grid, k):
    n = len(grid)

    def dfs(i, j, path, visited, current_path):
        if len(current_path) == k:
            return [path]
        visited.add((i, j))
        paths = []
        for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_path = dfs(
                    ni,
                    nj,
                    path + [grid[ni][nj]],
                    visited.copy(),
                    current_path + [grid[ni][nj]],
                )
                paths.extend(new_path)
        return paths

    visited = set()
    return min(dfs(0, 0, [], visited, [grid[0][0]]), key=len)