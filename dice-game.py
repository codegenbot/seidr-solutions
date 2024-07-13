def dice_game(n, m):
    return (n - 1) / n * (m / ((n + m) * math.comb(n + m, m)))