def minPath(grid, k):
    def dfs(i, j, path_len, path):
        if path_len == k:
            return path
        if i < 0 or i >= len(grid) or j < 0 or j >= len(grid[0]):
            return None
        curr_val = grid[i][j]
        grid[i][j] = None
        neighbors = [(i+1, j), (i-1, j), (i, j+1), (i, j-1)]
        neighbors.sort(key=lambda x: grid[x[0]][x[1]] if 0 <= x[0] < len(grid) and 0 <= x[1] < len(grid[0]) else float('inf'))
        for neighbor in neighbors:
            ni, nj = neighbor
            if grid[ni][nj] is not None and (path_len == k-1 or grid[ni][nj] < curr_val):
                result = dfs(ni, nj, path_len+1, path + [grid[ni][nj]])
                if result is not None:
                    return result
        grid[i][j] = curr_val
        return None

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            result = dfs(i, j, 1, [grid[i][j]])
            if result is not None:
                return result