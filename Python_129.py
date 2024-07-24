def minPath(grid, k):
    N = len(grid)
    min_path = []

    def dfs(i, j, visited, path, steps, cur_sum):
        nonlocal min_path
        visited.add((i, j))
        path.append(grid[i][j])

        if steps == N * N:
            if not min_path or cur_sum < sum(min_path):
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
            new_sum = cur_sum + grid[x][y]
            if new_sum <= k:
                dfs(x, y, set(visited), path.copy(), steps + 1, new_sum)

    for i in range(N):
        for j in range(N):
            dfs(i, j, set(), [], 1, grid[i][j])

    return min_path if min_path else None


assert minPath([[1, 3], [3, 2]], 10) == [1, 3, 1, 3, 1, 3, 1, 3, 1, 3]