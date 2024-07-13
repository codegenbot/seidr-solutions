def dice_game(n, m):
    if n == m:
        return 0
    elif n > m:
        return (n-m) / m
    else:
        return (m-n) / n