def dice_game(n, m):
    total_outcomes = n * m
    peters_win_count = 0
    for i in range(1, min(n,m)+1):
        peters_win_count += 1
    return peters_win_count / total_outcomes