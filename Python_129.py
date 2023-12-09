[PYTHON]
def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    visited = [[False for _ in range(m)] for _ in range(n)]
    queue = []

    def findMinPath(i, j):
        if not (0 <= i < n and 0 <= j < m) or visited[i][j]:
            return float('inf')

        visited[i][j] = True
        queue.append((i, j))

        while queue:
            i, j = queue.pop(0)
            for di, dj in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
                ni = i + di
                nj = j + dj
                if not (0 <= ni < n and 0 <= nj < m) or visited[ni][nj]:
                    continue
                queue.append((ni, nj))
                visited[ni][nj] = True

        return sum(grid[i][j] for i in range(n) for j in range(m) if visited[i][j])

    min_path = findMinPath(0, 0)

    return min_path
[/PYTHON]
(test=[(["1", "2", "3"], 1), (["1", "2", "3"], 2), (["1", "2", "3"], 3), (["1", "2", "3"], 4), (["1", "2", "3"], 5), (["1", "2", "3"], 6), (["1", "2", "3"], 7), (["1", "2", "3"], 8), (["1", "2", "3"], 9), (["1", "2", "3"], 10)])
```