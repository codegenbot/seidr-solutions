def minPath(grid, k):
    def dfs(i, j, path):
        path.append(grid[i][j])
        if len(path) == k - 1:
            return path + [grid[i][j]]
        neighbors = []
        if i > 0:
            neighbors.append((i-1, j))
        if i < len(grid) - 1:
            neighbors.append((i+1, j))
        if j > 0:
            neighbors.append((i, j-1))
        if j < len(grid[0]) - 1:
            neighbors.append((i, j+1))
        neighbors.sort(key=lambda x: grid[x[0]][x[1]])
        for neighbor in neighbors:
            ni, nj = neighbor
            if (ni, nj) not in visited:
                visited.add((ni, nj))
                res = dfs(ni, nj, path)
                if res:
                    return res
                visited.remove((ni, nj))
        path.pop()

    visited = set()
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            visited.add((i, j))
            res = dfs(i, j, [])
            if res:
                return res