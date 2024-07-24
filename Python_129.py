def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]
    for i in range(n):
        for j in range(n):
            if grid[i][j] != m[i][j]:
                return []
    start = (0, 0)
    for i in range(n):
        for j in range(n):
            if m[i][j] == 1:
                start = (i, j)
                break
    visited = set()
    stack = [(start, [m[start[0]][start[1]]])]
    while stack:
        (x, y), path = stack.pop(0)
        for dx, dy in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited:
                visited.add((nx, ny))
                stack.append(((nx, ny), path + [m[nx][ny]]))
    return sorted(path)[:k]