def dice_game(n, m):
    peter_win_count = sum(min(i+1, n) <= j for i in range(1, m+1) for j in range(1, n+1))
    total_outcomes = (n * m)
    return peter_win_count / float(total_outcomes)