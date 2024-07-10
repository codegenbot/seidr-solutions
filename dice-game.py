def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = sum(1 for i in range(min(n,m)+1) if i < (n-1)//m and i < min(n-1, m))
    return 1 - (peter_wins / total_outcomes)