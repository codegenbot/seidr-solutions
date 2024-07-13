def dice_game(n, m):
    total = n * m
    peters_wins = 0
    for i in range(1, min(m, n)):
        peters_wins += (n - i) * (m - i)
    return peters_wins / total