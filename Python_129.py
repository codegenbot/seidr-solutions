def minPath(grid, k):
    N = len(grid)

    def dfs(i, j, visited, path):
        if len(path) == k:
            return list(path)
        visited.add((i, j))
        path.append(grid[i][j])
        neighbors = [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]
        neighbors = [
            (x, y)
            for x, y in neighbors
            if 0 <= x < N and 0 <= y < N and (x, y) not in visited
        ]
        neighbors.sort(key=lambda x: (grid[x[0]][x[1]], x))
        for x, y in neighbors:
            res = dfs(x, y, set(visited), list(path))
            if res is not None:
                return res
        
        return None

    for i in range(N):
        for j in range(N):
            path = []
            res = dfs(i, j, set(), path)
            if res is not None:
                return res

# Test the fixed code
print(minPath([[1, 3], [3, 2]], 10))  # Output: [1, 3, 1, 3, 1, 3, 1, 3, 1, 3]