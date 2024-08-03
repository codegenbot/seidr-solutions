def minPath(grid, k):
    n = len(grid)
    m = [[(i - 1) * n + j] for i in range(n) for j in range(n)]

    for _ in range(k):
        new_m = []
        for j in range(n):
            for i in range(n):
                if i > 0:
                    new_m.append([m[i - 1][j]])
                if i < n - 1:
                    new_m.append([m[i + 1][j]])
                if j > 0:
                    new_m.append([m[i][j - 1]])
                if j < n - 1:
                    new_m.append([m[i][j + 1] if j + 1 < n else None])
        m = new_m
    return sorted(list(set(m[0])))