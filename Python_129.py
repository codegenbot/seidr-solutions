def minPath(grid, k):
    N = len(grid)
    min_path = []

    def dfs(i, j, visited, path, steps):
        nonlocal min_path
        visited.add((i, j))
        path.append(grid[i][j])

        if len(path) > N * N or sum(path) > k:
            return

        if steps == N * N:
            if not min_path or sum(path) < sum(min_path):
                min_path = list(path)
            return

        neighbors = [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]
        neighbors = [
            (x, y)
            for x, y in neighbors
            if 0 <= x < N and 0 <= y < N and (x, y) not in visited
        ]
        neighbors.sort(key=lambda x: (grid[x[0]][x[1]], x))
        for x, y in neighbors:
            dfs(x, y, set(visited), path.copy(), steps + 1)

    for i in range(N):
        for j in range(N):
            dfs(i, j, set(), [], 1)

    return min_path if min_path else None