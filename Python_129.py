import collections


def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = set()
    queue = collections.deque([(0, 0, [])])

    while queue:
        x, y, path = queue.popleft()
        if (x, y) in visited:
            continue
        visited.add((x, y))
        path.append(grid[x][y])
        if len(path) == k:
            return path
        for dx, dy in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
            nx = x + dx
            ny = y + dy
            if 0 <= nx < n and 0 <= ny < m:
                queue.append((nx, ny, path[:]))
    return []