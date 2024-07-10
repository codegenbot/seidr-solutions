from collections import deque


def minPath(grid, k):
    N = len(grid)

    def dfs(x, y, path, dist):
        if len(path) > k:
            return False

        if len(path) == k:
            return True

        for dx, dy in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            nx, ny = x + dx, y + dy
            if 0 <= nx < N and 0 <= ny < N:
                new_path = path + [grid[nx][ny]]
                if dfs(nx, ny, new_path, dist + abs(dx) + abs(dy)):
                    return True

        return False

    queue = deque([(0, 0, [grid[0][0]], 0)])

    while queue:
        x, y, path, dist = queue.popleft()

        if dfs(x, y, path, dist):
            return [path]

    return []