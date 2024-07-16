def minPath(grid, k):
    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
  
    def dfs(i, j, path):
        if len(path) == k:
            return path

        next_steps = [
            (i + di, j + dj)
            for di, dj in directions
            if 0 <= i + di < N and 0 <= j + dj < N
        ]
        next_steps.sort(key=lambda x: grid[x[0]][x[1]])

        shortest_path = None
        for ni, nj in next_steps:
            new_path = dfs(ni, nj, path + [grid[ni][nj]])
            if new_path:
                if shortest_path is None or len(new_path) < len(shortest_path):
                    shortest_path = new_path

        return shortest_path

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path