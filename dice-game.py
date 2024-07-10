def dice_game(n, m):
    return sum(1 / m for i in range(m)) if n > m else sum(1 / n for i in range(n))