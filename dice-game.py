def dice_game(n, m):
    total_outcomes = n * m
    peters_dont_win_count = 0
    for i in range(1, m+1):
        peters_dont_win_count += min(i, n) - i + 1
    return (total_outcomes - peters_dont_win_count) / total_outcomes