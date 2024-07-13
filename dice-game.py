def dice_game(n, m):
    if n > m:
        return (n-1) / (n*m) - 1 / (n*m)
    elif n < m:
        return (m-1) / (m*n) - 1 / (n*m)
    else:
        return 0