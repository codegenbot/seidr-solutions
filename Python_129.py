def minPath(grid, k):
    visited = set()
    path = []
    start = (0, 0)
    dfs(grid, k, start, visited, path)
    return path

def dfs(grid, k, curr, visited, path):
    if len(path) == k:
        return True
    x, y = curr
    if x < 0 or x >= len(grid) or y < 0 or y >= len(grid[0]) or curr in visited:
        return False
    visited.add(curr)
    path.append(grid[x][y])
    if dfs(grid, k, (x + 1, y), visited, path):
        return True
    if dfs(grid, k, (x - 1, y), visited, path):
        return True
    if dfs(grid, k, (x, y + 1), visited, path):
        return True
    if dfs(grid, k, (x, y - 1), visited, path):
        return True
    visited.remove(curr)
    path.pop()