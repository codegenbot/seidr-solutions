from collections import deque


def minPath(grid, k):
    n = len(grid)

    for _ in range(k):
        queue = deque([(i, j) for i in range(n) for j in range(n)])
        visited = set()

        while queue:
            x, y = queue.popleft()

            if (x, y) not in visited:
                visited.add((x, y))

                min_val = grid[x][y]

                if x > 0:
                    queue.append((x - 1, y, min(min_val + 1, grid[x - 1][y])))
                if y > 0:
                    queue.append((x, y - 1, min(min_val + 1, grid[x][y - 1])))
                if x < n - 1:
                    queue.append((x + 1, y, min(min_val + 1, grid[x + 1][y])))
                if y < n - 1:
                    queue.append((x, y + 1, min(min_val + 1, grid[x][y + 1])))

        res = []
        for i in range(n):
            for j in range(n):
                res.append(grid[i][j])

        return res