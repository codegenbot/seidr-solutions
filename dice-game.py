def dice_game(n, m):
    total = n * m
    peters_wins = 0
    for i in range(1, min(n, m) + 1):
        peters_wins += (n - i) * (m - 1)
    return peters_wins / total