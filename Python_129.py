def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path, visited):
        if (i, j) in visited:
            return None
        visited.add((i, j))
        for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
            ni, nj = i + x, j + y
            if 0 <= ni < n and 0 <= nj < n:
                path.append(m[ni][nj])
                res = dfs(ni, nj, path, visited)
                if res is not None:
                    return res
                path.pop()
        visited.remove((i, j))
        return None

    def min_steps():
        for i in range(n):
            for j in range(n):
                path = [m[i][j]]
                visited = {m[i][j]}
                visited.add(m[i][j])
                stack = [(i, j)]
                while stack:
                    ni, nj = stack.pop()
                    if (ni, nj) == (0, 0) or (ni, nj) == (n - 1, n - 1):
                        return len(path)
                    for x, y in [(-1, 0), (1, 0), (0, -1), (0, 1)]:
                        ni2, nj2 = ni + x, nj + y
                        if 0 <= ni2 < n and 0 <= nj2 < n and (ni2, nj2) not in visited:
                            stack.append((ni2, nj2))
                            path.append(m[ni2][nj2])
                            visited.add(m[ni2][nj2])

    min_steps_needed = min_steps()
    if k > min_steps_needed:
        return []
    for i in range(n):
        for j in range(n):
            res = dfs(i, j, [], set())
            if res is not None and len(res) == k:
                return res