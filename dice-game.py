def dice_game(n, m):
    total = n * m
    peters_wins = 0
    for i in range(min(n, m)):
        peters_wins += n - i
    return peters_wins / total