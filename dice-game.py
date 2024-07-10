def dice_game(n, m):
    return (m-1) / (n*m - 1) if n > m else (n-1) / (n*m - 1)