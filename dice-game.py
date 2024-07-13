def dice_game(n, m):
    total_outcomes = n * m
    peters_win = sum(range(m+1, n*m+1))
    return peters_win / total_outcomes