def minPath(grid, k):
    N = len(grid)
    visited = [[False for _ in range(N)] for _ in range(N)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    queue = [(grid[0][0], [grid[0][0]])
    
    while queue:
        val, path = queue.pop(0)
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N and not visited[nx][ny]:
                new_path = path + [grid[nx][ny]]
                if len(new_path) == k:
                    return sorted(new_path)
                queue.append((val, new_path))
                visited[nx][ny] = True
        x, y = N - 1, N - 1
    return []