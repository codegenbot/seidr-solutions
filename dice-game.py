def dice_game(n, m):
    return sum(1 for k in range(2, n+1) for l in range(1, min(k, m)) if k > l) / (n * m)