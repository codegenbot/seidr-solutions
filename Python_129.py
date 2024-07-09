def minPath(grid, k):
    n = len(grid)
    m = [[i * j for j in range(1, n + 1)] for i in range(1, n + 1)]

    memo = {}

    def dfs(i, j, path, cnt):
        if (i, j) in memo:
            return memo[(i, j)]

        if cnt == k:
            return path

        res = []
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 1 <= ni < n and 1 <= nj < n and (ni, nj) not in memo:
                res.append(dfs(ni, nj, path + [m[ni][nj]], cnt + 1))

        res.sort()
        memo[(i, j)] = res[0]
        return memo[(i, j)]

    min_path = []
    for i in range(1, n):
        for j in range(n):
            if (i, j) not in memo:
                path = dfs(i, j, [], 0)
                while k > 0 and path[-1] != grid[i][j]:
                    k -= 1
                    path.pop()
                min_path.append(path[:])
                break
        else:
            continue
        break

    return min_path[0]