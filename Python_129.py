def minPath(grid, k):
    def dfs(i, j, path):
        if len(path) == k:
            return path
        neighbors = []
        if i > 0:
            neighbors.append((i - 1, j))
        if i < len(grid) - 1:
            neighbors.append((i + 1, j))
        if j > 0:
            neighbors.append((i, j - 1))
        if j < len(grid[0]) - 1:
            neighbors.append((i, j + 1))
        neighbors.sort(key=lambda x: grid[x[0]][x[1]])
        for neighbor in neighbors:
            ni, nj = neighbor
            if (ni, nj) not in path:
                result = dfs(ni, nj, path + [(ni, nj)])
                if result:
                    return result
        return None

    start = min([(i, j) for i in range(len(grid)) for j in range(len(grid[0]))], key=lambda x: grid[x[0]][x[1]])
    return [grid[start[0]][start[1]]] + [grid[x[0]][x[1]] for x in dfs(start[0], start[1], [start])]