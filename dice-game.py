def dice_game(n, m):
    if n == 1 or m == 1:
        return 0
    elif n > m:
        return (n - m) / (n * m)
    else:
        return (m - 1) / (n * m)