from collections import deque

def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return path
        visited.add((i, j))
        min_path = None
        queue = deque([(i, j, path)])
        while queue:
            ni, nj, new_path = queue.popleft()
            for x, y in [(0, 1), (0, -1), (1, 0), (-1, 0)]:
                ni2, nj2 = ni + x, nj + y
                if (0 <= ni2 < n and 0 <= nj2 < n and (ni2, nj2) not in visited and grid[ni2][nj2] == 0):
                    new_path2 = new_path + [m[ni2][nj2]]
                    if min_path is None or len(new_path2) < len(min_path):
                        min_path = new_path2
        return min_path

    min_path = None
    for i in range(n):
        for j in range(n):
            path = dfs(i, j, [], set())
            if min_path is None or len(path) < len(min_path):
                min_path = path
    return min_path