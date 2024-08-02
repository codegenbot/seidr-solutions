def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    visited = set()
    path = []
    curr_paths = []

    def dfs(i, j, curr_path):
        if len(curr_path) == k:
            curr_paths.append(curr_path[:])
            return True

        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                visited.add((ni, nj))
                dfs(ni, nj, curr_path + [grid[ni][nj]])
                visited.remove((ni, nj))

        return False

    for i in range(n):
        for j in range(n):
            if dfs(i, j, [grid[i][j]]):
                return curr_paths