def dfs(i, j, path):
    if len(path) == k:
        return path

    for ni, nj in get_neighbors(i, j):
        if grid[ni][nj] not in path:
            res = dfs(ni, nj, path + [grid[ni][nj]])
            if res:
                return res

    return None