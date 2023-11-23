def minPath(grid, k):
    if k > len(grid) * len(grid[0]):
        return []

    min_path = []

    def dfs(i, j, curr_path):
        curr_path.append(grid[i][j])
        if len(curr_path) == k:
            return curr_path

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
            if grid[ni][nj] not in curr_path:
                result = dfs(ni, nj, curr_path)
                if len(result) == k:
                    return result

        curr_path.pop()

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            curr_path = []
            result = dfs(i, j, curr_path)
            if len(result) < k:
                continue
            if not min_path or result < min_path:
                min_path = result

    return min_path if len(min_path) == k else []