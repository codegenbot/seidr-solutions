```
def minPath(grid, k):
    N = len(grid)
    seen = set()
    queue = [(grid[0][0], [grid[0][0]])]
    ans = None
    while queue:
        val, path = queue.pop(0)
        if len(path) > k:
            continue
        if len(path) == k and (ans is None or sorted(path) < sorted(ans)):
            ans = path
        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            x, y = divmod(path[-1] - 1 - N * N // N, N)
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and grid[nx][ny] not in seen:
                seen.add(grid[nx][ny])
                queue.append((grid[nx][ny], path + [grid[nx][ny]]))
    return ans