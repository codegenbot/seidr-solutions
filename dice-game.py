def dice_game(n, m):
    p_wins = sum(1 for _ in range(m)) / (n * m)
    return p_wins