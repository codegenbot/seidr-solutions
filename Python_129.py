from collections import deque


def minPath(grid, k):
    n = len(grid)
    res = []
    visited = [[False] * n for _ in range(n)]
    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]

    def bfs(i, j, path, total):
        if total > k:
            return []
        if i == n - 1 and j == n - 1 and total == k:
            return [path + [grid[i][j]]]
        queue = deque([(i, j, path, total)])
        visited[i][j] = True
        min_path = None
        while queue:
            ni, nj, new_path, total = queue.popleft()
            for di, dj in directions:
                ni2, nj2 = ni + di, nj + dj
                if 0 <= ni2 < n and 0 <= nj2 < n and not visited[ni2][nj2]:
                    queue.append(
                        (ni2, nj2, new_path + [grid[i][j]], total + grid[i][j])
                    )
                    if i == n - 1 and j == n - 1 and total + grid[i][j] == k:
                        return [new_path + [grid[i][j]]]
        visited[i][j] = False
        return min_path if min_path else []

    res = bfs(0, 0, [], 0)
    return [x for x in res[0]]