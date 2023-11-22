def minPath(grid, k):
    def dfs(i, j, path, length):
        if length == k:
            return path
        neighbors = [(i + 1, j), (i - 1, j), (i, j + 1), (i, j - 1)]
        for ni, nj in neighbors:
            if (
                0 <= ni < len(grid)
                and 0 <= nj < len(grid[0])
                and (ni, nj) not in visited
            ):
                visited.add((ni, nj))
                path.append(grid[ni][nj])
                res = dfs(ni, nj, path, length + 1)
                if res:
                    return res
                path.pop()
                visited.remove((ni, nj))
        return None

    visited = set()
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            visited.add((i, j))
            path = [grid[i][j]]
            res = dfs(i, j, path, 1)
            if res:
                return res