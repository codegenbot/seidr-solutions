def dice_game(n, m):
    return sum(1/(n*m) for i in range(m) for j in range(i+1, min(i+2, n))) / (n * m)