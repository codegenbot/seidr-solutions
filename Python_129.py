for i in range(N):
    for j in range(N):
        visited[i][j] = True
        if dfs(i, j, [grid[i][j]]):
            paths.append(path[:])
        return []

return paths