def dice_game(n, m):
    return sum((m-j)*(j+1)/(n*m) for j in range(m))