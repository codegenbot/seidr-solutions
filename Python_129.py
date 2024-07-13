def minPath(grid, k):
    n = len(grid)
    m = [[i * n + j for j in range(n)] for i in range(n)]

    def dfs(i, j, path, visited):
        if len(path) == k:
            return path

        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        for di, dj in directions:
            ni, nj = i + di, j + dj
            if 0 <= ni < n and 0 <= nj < n and m[ni][nj] not in visited:
                path.append(m[ni][nj])
                visited.add(m[ni][nj])
                p = dfs(ni, nj, path, visited)
                if p:
                    return p
                path.pop()
                visited.remove(m[ni][nj])

        return None

    min_path = []
    for i in range(n):
        for j in range(n):
            path = [m[i][j]]
            visited = {m[i][j]}
            p = dfs(i, j, path, visited)
            if p and (not min_path or p < min_path):
                min_path = p

    return min_path