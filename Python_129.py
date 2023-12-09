def minPath(grid, k):
n = len(grid)
m = len(grid[0])
visited = [[False for _ in range(m)] for _ in range(n)]
path = []
if k > n * m:
return []
for i in range(n):
for j in range(m):
if not visited[i][j]:
path.append(findMinPath(i, j, k))
return sum(path)