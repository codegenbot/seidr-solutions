def minPath(grid, k):
    n = len(grid)
    m = [[0] * n for _ in range(n)]

    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                m[i][j] = [i, j]

    visited = set()
    path = []

    def dfs(i, j, k):
        nonlocal path
        if k < 0:
            return False
        if (i, j) in visited or (i, j) not in [
            (x, y) for x in range(n) for y in range(n)
        ]:
            return False

        if k > 0:
            visited.add((i, j))

            path.append(grid[i][j])
            dfs(i - 1, j, k - 1)
            dfs(i + 1, j, k - 1)
            dfs(i, j - 1, k - 1)
            dfs(i, j + 1, k - 1)
            visited.remove((i, j))
        return True

    for i in range(n):
        for j in range(n):
            if dfs(i, j, k):
                return path