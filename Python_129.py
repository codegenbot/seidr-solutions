for p in res:
    if len(p[:k]) == k and (not min_path or sum(grid[i][j] for i, j in zip(*[ [(i//n,j//n) for i, j in enumerate(path)] ])) < sum(grid[i][j] for i, j in zip(*[[(i//n,j//n) for i, j in enumerate(min_path)]]))):
        min_path = p