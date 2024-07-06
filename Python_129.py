def minPath(grid, k):
    n = len(grid)

    queue = [(0, 0, [])]
    visited = set((0, 0))

    while queue:
        x, y, path = queue.pop(0)

        if len(path) == k:
            return path

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if (nx, ny) not in visited and 0 <= nx < n and 0 <= ny < n:
                queue.append((nx, ny, path + [grid[nx][ny]]))
                visited.add((nx, ny))

    if k > len([grid[i] for i in range(n)]):
        paths = []
        for path in generatePaths(grid, k):
            paths.append(path)
        return paths

    return []


def generatePaths(grid, k):
    n = len(grid)
    visited = set((0, 0))
    queue = [(0, 0, [])]

    while queue:
        x, y, path = queue.pop(0)

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy

            if (nx, ny) not in visited and 0 <= nx < n and 0 <= ny < n:
                queue.append((nx, ny, path + [grid[nx][ny]]))
                visited.add((nx, ny))

        if len(path) == k:
            yield path