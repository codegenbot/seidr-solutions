def dice_game(n, m):
    return sum((1/n)*(m-x) for x in range(m))