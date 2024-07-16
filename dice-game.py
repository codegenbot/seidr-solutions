def dice_game(n, m):
    total_outcomes = n * m
    peter_win_count = sum(1 for _ in range(m) for j in range(min(n,m)+1, n+1))
    return peter_win_count / float(total_outcomes)