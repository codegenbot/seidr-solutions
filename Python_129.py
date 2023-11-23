def minPath(grid, k):
    visited = set()
    path = []
    n = len(grid)
    def dfs(row, col, length):
        if length == k:
            return True
        if row < 0 or row >= n or col < 0 or col >= n or (row, col) in visited:
            return False
        visited.add((row, col))
        path.append(grid[row][col])
        if dfs(row + 1, col, length + 1):
            return True
        if dfs(row - 1, col, length + 1):
            return True
        if dfs(row, col + 1, length + 1):
            return True
        if dfs(row, col - 1, length + 1):
            return True
        path.pop()
        visited.remove((row, col))
        return False

    for i in range(n):
        for j in range(n):
            if dfs(i, j, 0):
                return path