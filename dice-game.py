def dice_game(n, m):
    total_outcomes = n * m
    peter_win_count = sum(1 for i in range(min(n,m)+1,n+1) for j in range(1,m+1))
    return peter_win_count / total_outcomes