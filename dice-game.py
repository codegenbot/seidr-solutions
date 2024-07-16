def dice_game(n, m):
    total_outcomes = n * m
    peter_win_count = sum(1 for k in range(min(n,m)+1,n+1) for _ in range(m))
    return peter_win_count / total_outcomes