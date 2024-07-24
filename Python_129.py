def minPath(grid, k):
    n = len(grid)
    m = [[grid[i][j] for j in range(n)] for i in range(n)]

    def dfs(i, j, path, visited, curr_sum):
        nonlocal min_path
        if i == 0 and j == 0:
            return
        if curr_sum > k:
            return 
        if sum(path) < sum(min_path):
            min_path = path
        for x, y in [(0, 1), (1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_sum = curr_sum + m[ni][nj]
                new_path = path + [m[ni][nj]]
                visited.add((ni, nj))
                dfs(ni, nj, new_path, visited, new_sum)
                visited.remove((ni, nj))

    min_path = []
    dfs(0, 0, [], set(), grid[0][0])
    return min_path