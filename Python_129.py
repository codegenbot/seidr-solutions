def dfs(i, j, path):
    if len(path) == k:
        return path

    visited[i][j] = True
    for dx, dy in directions:
        ni, nj = i + dx, j + dy
        if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
            new_path = dfs(ni, nj, path + [grid[ni][nj]])
            if new_path:
                return new_path

    visited[i][j] = False