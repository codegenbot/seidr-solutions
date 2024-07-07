def minPath(grid, k):
    N = len(grid)
    for i in range(N):
        for j in range(N):
            grid[i][j] -= 1
    visited = set()
    queue = [(0, [grid[0][0]], [grid[0][0]])]
    while queue:
        path_len, path_val, curr_val = queue.pop(0)
        if path_len == k:
            return curr_val
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = i + dx, j + dy
            if 0 <= x < N and 0 <= y < N and grid[x][y] not in visited:
                new_val = curr_val + [grid[x][y]]
                queue.append((path_len + 1, path_val, new_val))
                visited.add(grid[x][y])
    return []