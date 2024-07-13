def minPath(grid, k):
    n = len(grid)
    res = []
    queue = [(0, 0, [grid[0][0]])]  # (row, col, path)

    while queue:
        row, col, path = queue.pop(0)

        if len(path) == k:
            res = sorted(path)
            return res

        for r, c in [(row - 1, col), (row + 1, col), (row, col - 1), (row, col + 1)]:
            if 0 <= r < n and 0 <= c < n and grid[r][c] not in path:
                queue.append((r, c, path + [grid[r][c]]))

    return []