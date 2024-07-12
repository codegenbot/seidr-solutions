```
def minPath(grid, k):
    n = len(grid)
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
    visited = set()
    path = []

    def dfs(x, y, k):
        if k == 0:
            return True
        for dx, dy in directions:
            nx, ny = x + dx, y + dy
            if 0 <= nx < n and 0 <= ny < n and (nx, ny) not in visited and grid[nx][ny] not in path[-k:]:
                visited.add((nx, ny))
                path.append(grid[nx][ny])
                if dfs(nx, ny, k - 1):
                    return True
                path.pop()
                visited.remove((nx, ny))
        return False

    for i in range(n):
        for j in range(n):
            visited = set()
            path = []
            if dfs(i, j, k):
                return path
    return []