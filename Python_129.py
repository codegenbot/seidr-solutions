def minPath(grid, k):
    n = len(grid)
    min_path = float('inf')

    def dfs(i, j, visited, current_path):
        nonlocal min_path
        if len(visited) == k:
            min_path = min(min_path, current_path)
            return
        visited.add((i, j))
        neighbors = [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]
        neighbors = [
            (x, y)
            for x, y in neighbors
            if 0 <= x < n and 0 <= y < n and (x, y) not in visited
        ]
        neighbors.sort(key=lambda x: grid[x[0]][x[1]])
        for x, y in neighbors:
            dfs(x, y, visited.copy(), current_path + grid[x][y])

    for i in range(n):
        for j in range(n):
            dfs(i, j, set(), grid[i][j])

    return min_path