def dice_game(n, m):
    if n < m:
        return 0.0
    elif n == m:
        return 0.5
    else:
        p = 1
        for i in range(1, m):
            p += (n - m + 1) / n
        return p