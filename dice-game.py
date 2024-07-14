def dice_game(n, m):
    total_outcomes = n * m
    peters_win = n - m
    for i in range(m+1, min(n,m)+1):
        peters_win += 2*(i-m)
    return peters_win / total_outcomes