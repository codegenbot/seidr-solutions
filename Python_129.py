def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    queue = [(0, 0, [])]
    min_path = None
    for i, (x, y) in enumerate(queue):
        if i == k:
            break
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                visited[nx][ny] = True
                queue.append((nx, ny, x if i == 0 else [grid[x][y]] + queue[i - 1][-1]))
        if i == k - 1:
            min_path = queue[-1]
    return min_path[2]