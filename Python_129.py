def minPath(grid):
    n = len(grid)
    res = []
    min_val = float("inf")
    for i in range(n):
        for j in range(n):
            for k1, k2 in [(i, j), (i + 1, j), (i, j + 1), (i + 1, j + 1)]:
                total = sum(
                    [
                        grid[x][y]
                        for x in range(k1, min(k1 + k2 + 1, n))
                        for y in range(max(0, k1 - k2) + 1)
                        if 0 <= x < n and 0 <= y < n
                    ]
                )
                if total < min_val:
                    res = [(k1, k2)]
                    min_val = total
                elif total == min_val:
                    res.append((k1, k2))
    return res