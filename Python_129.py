```
def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    queue = [(0, 0, [])]
    min_path = None
    while queue:
        x, y, path = queue[-1][2]
        if [x, y] == [N - 1, N - 1]:
            return grid[N-1][N-1]
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                visited[nx][ny] = True
                queue.append((nx, ny, [grid[x][y]] + path))
        if len(queue) > k:
            break
    return None