def minPath(grid, k):
    def dfs(i, j, path, remain):
        if remain == 0:
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
        for ni, nj in neighbors:
            if (ni, nj) not in path:
                new_path = dfs(
                    ni, nj, path + [(ni, nj)], remain - 1
                )  # Update the remain value in the recursive call
                if new_path:
                    return new_path
        return None

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            path = dfs(i, j, [(i, j)], k - 1)  # Pass k value - 1 to the dfs function
            if path:
                return [grid[x][y] for x, y in path]