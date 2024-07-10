def minPath(grid, k):
    n = len(grid)
    res = []

    for i in range(n):
        for j in range(n):
            if grid[i][j] == 1:
                path = [(i, j)]
                for _ in range(k - 1):
                    directions = [(0, 1), (0, -1), (1, 0), (-1, 0)]
                    possible_moves = []
                    for d in directions:
                        ni, nj = i + d[0], j + d[1]
                        if 0 <= ni < n and 0 <= nj < n and (ni, nj) not in path:
                            possible_moves.append((ni, nj))
                    if possible_moves:
                        ni, nj = min(possible_moves)
                        res.append(grid[ni][nj])
                        i, j = ni, nj
                    else:
                        break

    return res