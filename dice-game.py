def dice_game(n, m):
    total_outcomes = n * m
    peter_win_count = sum(1 for i in range(m+1) for j in range(i, min(j+n, m)+1))
    return peter_win_count / float(total_outcomes)