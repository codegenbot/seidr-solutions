def minPath(grid, k):
    min_path = None

    def dfs(i, j, path, visited, path_len):
        nonlocal min_path

        if path_len > k:
            return

        if (i, j) not in visited:
            path.append(grid[i][j])
            visited.add((i, j))

        if path_len == k:
            if min_path is None or len(path) < len(min_path):
                min_path = path.copy()
            path.pop()
            visited.remove((i, j))
            return

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
            dfs(ni, nj, path.copy(), visited.copy(), path_len + 1)
        path.pop()
        visited.remove((i, j))

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            dfs(i, j, [], set(), 0)

    return min_path


assert minPath([[1, 3], [3, 2]], 2) == [1, 3, 2]