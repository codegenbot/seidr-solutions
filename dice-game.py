def dice_game(n, m):
    total_outcomes = n * m
    peters_win_count = sum((n-j+1) * (m-(j-1)) for j in range(1, min(n, m)+1))
    return peters_win_count / total_outcomes