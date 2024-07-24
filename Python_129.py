def minPath(grid, k):
    n = len(grid)
    m = [[grid[i][j] for j in range(n)] for i in range(n)]

    def dfs(i, j, path, visited, curr_sum):
        if i == 0 and j == 0:
            return path
        if curr_sum > k:
            return None
        min_path = None
        for x, y in [(0, 1), (1, 0)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in visited:
                new_sum = curr_sum + m[ni][nj]
                new_path = dfs(ni, nj, path + [m[ni][nj]], visited.add((ni, nj)), new_sum)
                if min_path is None or sum(new_path) < sum(min_path):
                    min_path = new_path
                if curr_sum == k:
                    return path
        return min_path if min_path else None

    return dfs(0, 0, [], set(), grid[0][0])