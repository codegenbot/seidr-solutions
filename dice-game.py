def dice_game(n, m):
    if n > m:
        return (n-1) / (n*m) - 1 / (n*m)
    elif n < m:
        return 1 / (m*n) - (m-1) / (n*m)
    else:
        return 1/2