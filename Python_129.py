def minPath(grid, k):
    N = len(grid)
    visited = set()
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def dfs(x, y, path):
        if len(path) == k:
            return path

        visited.add((x, y))
        next_moves = [
            (x + dx, y + dy)
            for dx, dy in directions
            if 0 <= x + dx < N and 0 <= y + dy < N and (x + dx, y + dy) not in visited
        ]

        next_moves.sort(key=lambda pos: grid[pos[0]][pos[1]])

        for next_x, next_y in next_moves:
            new_path = dfs(next_x, next_y, path + [grid[next_x][next_y]])
            if new_path:
                return new_path

        visited.remove((x, y))

    for i in range(N):
        for j in range(N):
            path = dfs(i, j, [grid[i][j]])
            if path:
                return path