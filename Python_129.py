def minPath(grid, k):
    N = len(grid)
    path = []

    def dfs(i, j, seen, curr_path):
        if len(curr_path) == k:
            return True
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < N and 0 <= nj < N and grid[ni][nj] not in seen:
                seen.add(grid[ni][nj])
                curr_path.append(grid[ni][nj])
                if dfs(ni, nj, seen, curr_path):
                    return True
                seen.remove(grid[ni][nj])
                curr_path.pop()
        return False

    for i in range(N):
        for j in range(N):
            seen = set()
            path.append(grid[i][j])
            if dfs(i, j, {grid[i][j]}, [grid[i][j]]):
                return path