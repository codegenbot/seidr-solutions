def shortestWay(grid, word):
    m = len(grid)
    n = len(grid[0])
    res = float('inf')
    for i in range(m):
        for j in range(n):
            if grid[i][j] == word[0]:
                path_len = dfs(i, j, 0, word)
                if path_len != -1:
                    res = min(res, path_len)
    return "#" * res if res != float('inf') else ""


def dfs(i, j, k, word):
    m = len(grid)
    n = len(grid[0])
    if k == len(word):
        return k
    if i < 0 or i >= m or j < 0 or j >= n or grid[i][j] != word[k]:
        return -1
    temp = grid[i][j]
    grid[i][j] = '#'
    res = dfs(i + 1, j, k + 1, word)
    if res != -1:
        return res
    grid[i][j] = temp
    res = dfs(i - 1, j, k + 1, word)
    if res != -1:
        return res
    res = dfs(i, j + 1, k + 1, word)
    if res != -1:
        return res
    res = dfs(i, j - 1, k + 1, word)
    if res != -1:
        return res
    return -1