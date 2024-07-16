def dice_game(n, m):
    total_outcomes = n * m
    peter_win_count = sum(1 for _ in range(min(n, m)) for i in range(1, min(n, m)+1) for j in range(i+1, n+1))
    return peter_win_count / float(total_outcomes)