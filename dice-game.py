def dice_game(n, m):
    total_cases = n * m
    peter_wins = sum(1 for i in range(m+1) for j in range(i, n))
    return peter_wins / total_cases