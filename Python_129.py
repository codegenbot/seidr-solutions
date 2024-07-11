def minPath(grid):
    n = len(grid)
    visited = [[False] * n for _ in range(n)]
    path = []

    def dfs(i, j, length, path_val):
        nonlocal path
        if length == k:
            return [path_val]

        if length > k:
            return []

        visited[i][j] = True
        directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        res = None

        for direction in directions:
            ni, nj = i + direction[0], j + direction[1]

            if 0 <= ni < n and 0 <= nj < n and not visited[ni][nj]:
                new_path = dfs(ni, nj, length + 1, path_val + [grid[i][j]])

                if new_path and (not res or new_path < res):
                    res = new_path

        visited[i][j] = False
        return res

    k = int(input("Enter the number of elements: "))

    for i in range(n):
        for j in range(n):
            path = dfs(i, j, 0, [])

            if path:
                break

        if path:
            break

    return path