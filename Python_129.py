def minPath(grid, k):
    N = len(grid)
    visited = [[False] * N for _ in range(N)]
    path = []
    start = (0, 0)
    dfs(grid, start, visited, path, k)
    return path

def dfs(grid, curr, visited, path, k):
    x, y = curr
    visited[x][y] = True
    path.append(grid[x][y])
    if len(path) == k:
        return
    neighbors = get_neighbors(grid, curr, visited)
    for neighbor in neighbors:
        dfs(grid, neighbor, visited, path, k)

def get_neighbors(grid, curr, visited):
    x, y = curr
    N = len(grid)
    neighbors = []
    if x > 0 and not visited[x-1][y]:
        neighbors.append((x-1, y))
    if x < N-1 and not visited[x+1][y]:
        neighbors.append((x+1, y))
    if y > 0 and not visited[x][y-1]:
        neighbors.append((x, y-1))
    if y < N-1 and not visited[x][y+1]:
        neighbors.append((x, y+1))
    return neighbors