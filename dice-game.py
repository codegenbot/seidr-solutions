def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(i > j for i in range(1, n+1) for j in range(1, min(i,m)+1))
    return peters_win / total_outcomes