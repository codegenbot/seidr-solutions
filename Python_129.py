def minPath(grid, k):
    N = len(grid)
    m = [[(i * N + j, grid[i][j]) for j in range(N)] for i in range(N)]
    for i in range(N):
        for j in range(N):
            if i > 0:
                m[i][j] += (m[i - 1][j], "up")
            if j > 0:
                m[i][j] += (m[i][j - 1], "left")
            if i < N - 1:
                m[i][j] += (m[i + 1][j], "down")
            if j < N - 1:
                m[i][j] += (m[i][j + 1], "right")

    directions = {"up": (-1, 0), "left": (0, -1), "down": (1, 0), "right": (0, 1)}
    memo = {}

    def dfs(i, j, path):
        if (i, j) in memo:
            return memo[(i, j)]
        if len(path) > k:
            return float("inf")
        if i < 0 or i >= N or j < 0 or j >= N:
            return float("inf")
        min_path = float("inf")
        for direction, (di, dj) in directions.items():
            ni, nj = i + di, j + dj
            if (ni, nj) not in path and grid[ni][nj] > 0:
                new_path = path + [(ni, nj)]
                min_path = min(min_path, dfs(ni, nj, new_path))
        memo[(i, j)] = min_path
        return min_path

    min_path_value = float("inf")
    for i in range(N):
        for j in range(N):
            if grid[i][j] > 0:
                path = [(i, j)]
                min_path_value = min(min_path_value, dfs(i, j, path))
    min_path = []
    i, j = N - 1, N - 1
    while len(min_path) < k or min_path[-1][0] != i or min_path[-1][1] != j:
        for direction, (di, dj) in directions.items():
            ni, nj = i + di, j + dj
            if (ni, nj) in min_path and dfs(ni, nj, [(ni, nj)]) == min_path_value - len(
                min_path
            ):
                path = [(i, j)]
                while True:
                    for direction2, (di2, dj2) in directions.items():
                        ni2, nj2 = i + di2, j + dj2
                        if (ni2, nj2) not in path and grid[ni2][nj2] > 0:
                            new_path = path + [(ni2, nj2)]
                            min_path_value = dfs(ni2, nj2, new_path)
                            break
                    else:
                        i, j = ni2, nj2
                        continue
                    break
                while len(path) < k and (path[-1][0], path[-1][1]) != (ni2, nj2):
                    for direction3, (di3, dj3) in directions.items():
                        ni3, nj3 = i + di3, j + dj3
                        if (ni3, nj3) not in path and grid[ni3][nj3] > 0:
                            new_path = path + [(ni3, nj3)]
                            min_path_value = dfs(ni3, nj3, new_path)
                            break
                    else:
                        i, j = ni3, nj3
                        continue
                    break
                if len(path) < k or (path[-1][0], path[-1][1]) != (ni2, nj2):
                    continue
                min_path = path[::-1]
                break
    return [grid[i][j] for i, j in min_path]