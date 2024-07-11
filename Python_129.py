from collections import deque


def minPath(grid, k):
    n = len(grid)
    res = []

    for _ in range(k):
        queue = deque([(i, j) for i in range(n) for j in range(n)])
        visited = set()
        cur_min = float("inf")

        while queue:
            x, y = queue.popleft()

            if grid[x][y] == 0 and (x, y) not in visited:
                visited.add((x, y))
                cur_min = min(cur_min, n * n - (n - x) - (n - y))

        res.append(cur_min)

    return res