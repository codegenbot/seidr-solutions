def minPath(grid, k):
    min_path = []

    def dfs(i, j, path, visited):
        nonlocal min_path

        if len(path) > k + 1:
            return

        path.append(grid[i][j])
        visited.add((i, j))

        neighbors = []
        if i > 0 and (i - 1, j) not in visited:
            neighbors.append((i - 1, j))
        if i < len(grid) - 1 and (i + 1, j) not in visited:
            neighbors.append((i + 1, j))
        if j > 0 and (i, j - 1) not in visited:
            neighbors.append((i, j - 1))
        if j < len(grid[0]) - 1 and (i, j + 1) not in visited:
            neighbors.append((i, j + 1))
        neighbors.sort(key=lambda x: grid[x[0]][x[1]])

        for neighbor in neighbors:
            ni, nj = neighbor
            dfs(ni, nj, path.copy(), visited.copy())

        path.pop()

        if not min_path or len(path) == k + 1:
            min_path = path.copy()

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            dfs(i, j, [], set())

    return min_path