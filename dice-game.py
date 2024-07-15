def dice_game(n, m):
    return (sum(1/(n*m) for _ in range(min(m, n)-1)) - sum(1/(n*m) for _ in range(min(m, n)))) / (n * m)