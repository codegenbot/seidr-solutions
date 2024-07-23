def dice_game(n, m):
    return sum((m-j) / (n*m) for j in range(m))