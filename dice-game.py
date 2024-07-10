def dice_game(n, m):
    if n <= m:
        return 0
    else:
        return sum(1 for _ in range(m)) / (n * m)