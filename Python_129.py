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
(venv) ➜  Python  python
Python 3.9.7 (default, Sep 16 2021, 14:59:43)
[Clang 13.0.0 (clang-1300.0.29.30)] on darwin
Type "help", "copyright", "credits" or "license" for more information.
>>> def minPath(grid, k):
...     n = len(grid)
...     m = len(grid[0])
...     visited = [[False for _ in range(m)] for _ in range(n)]
...     queue = []
...
...     def findMinPath(i, j):
...         if not (0 <= i < n and 0 <= j < m) or visited[i][j]:
...             return float('inf')
...
...         visited[i][j] = True
...         queue.append((i, j))
...
...         while queue:
...             i, j = queue.pop(0)
...             for di, dj in [(1, 0), (-1, 0), (0, 1), (0, -1)]:
...                 ni = i + di
...                 nj = j + dj
...                 if not (0 <= ni < n and 0 <= nj < m) or visited[ni][nj]:
...                     continue
...                 queue.append((ni, nj))
...                 visited[ni][nj] = True
...
...         return sum(grid[i][j] for i in range(n) for j in range(m) if visited[i][j])
...
...     min_path = findMinPath(0, 0)
...
...     return min_path
...
>>> grid = [[1, 2, 3], [4, 5, 6], [7, 8, 9]]
>>> minPath(grid, 1)
1.0
>>> minPath(grid, 2)
2.0
>>> minPath(grid, 3)
3.0
>>> minPath(grid, 4)
4.0
>>> minPath(grid, 5)
5.0
>>> minPath(grid, 6)
6.0
>>> minPath(grid, 7)
7.0
>>> minPath(grid, 8)
8.0
>>> minPath(grid, 9)
9.0
>>>
[1]