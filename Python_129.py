def minPath(grid, k):
    from heapq import heappush, heappop

    N = len(grid)
    directions = [(0, 1), (1, 0), (0, -1), (-1, 0)]
    min_path = None

    def dfs(x, y, path):
        nonlocal min_path
        if len(path) == k:
            if min_path is None or path < min_path:
                min_path = path[:]
            return

        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                path.append(grid[nx][ny])
                dfs(nx, ny, path)
                path.pop()

    for i in range(N):
        for j in range(N):
            dfs(i, j, [grid[i][j]])

    return min_path