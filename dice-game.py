def dice_game(n, m):
    if n > m:
        n, m = m, n
    return sum(1/i for i in range(1, n)) / (n * m)