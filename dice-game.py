def dice_game(n, m):
    total_outcomes = n * m
    peter_win_count = sum(1 for _ in range(m) for i in range(n+1) if i > _)
    return peter_win_count / float(total_outcomes)