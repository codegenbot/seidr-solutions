def minPath(grid, k):
    n = len(grid)
    m = len(grid[0])
    path = []
    visited = set()
    x, y = 0, 0
    path.append(grid[x][y])
    visited.add((x, y))
    while len(path) < k and (x, y) not in visited:
        neighbors = get_neighbors(grid, x, y, n, m)
        if len(path) < k - 1:
            x, y = neighbors[0]
            path.append(grid[x][y])
            visited.add((x, y))
        else:
            break
    return path
def get_neighbors(grid, x, y, n, m):
    neighbors = []
    if x - 1 >= 0:
        neighbors.append((x - 1, y))
    if x + 1 < n:
        neighbors.append((x + 1, y))
    if y - 1 >= 0:
        neighbors.append((x, y - 1))
    if y + 1 < m:
        neighbors.append((x, y + 1))
    return sorted(neighbors, key=lambda x: grid[x[0]][x[1]])