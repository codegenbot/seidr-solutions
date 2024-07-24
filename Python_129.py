def minPath(grid, k):
    N = len(grid)
    values = [i for row in grid for i in row]
    visited = set()
    queue = [(grid[0][0], [grid[0][0]])
    while queue:
        val, path = queue.pop(0)
        if len(path) == k + 1:
            return path[:-1]
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = min(max(0, val // N + dx), N-1), min(max(0, val % N + dy), N-1)
            new_val = grid[nx][ny]
            if new_val not in visited:
                queue.append((new_val, path + [new_val]))
                visited.add(new_val)