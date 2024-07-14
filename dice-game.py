def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(1 for i in range(m+1, n+1) for j in range(1, min(i, m)+1))
    return peters_win / total_outcomes