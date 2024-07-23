def dice_game(n, m):
    return sum(1/i/n for i in range(m)) if n > m else 0