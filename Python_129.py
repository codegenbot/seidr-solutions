def minPath(grid, k):
    from heapq import heappop, heappush

    N = len(grid)
    directions = [(-1, 0), (1, 0), (0, -1), (0, 1)]
    min_path = None

    def dfs(x, y, path):
        nonlocal min_path
        if len(path) == k:
            if min_path is None or path < min_path:
                min_path = path
            return
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                dfs(nx, ny, path + [grid[nx][ny]])

    for i in range(N):
        for j in range(N):
            dfs(i, j, [grid[i][j]])

    return min_path