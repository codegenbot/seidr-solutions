def roll_dice(n, m):
    total_outcomes = n * m
    peters_wins = sum(1 for i in range(1, min(n, m)+1) for j in range(1, max(m, n)+1) if i > j)
    
    return 2*peters_wins / total_outcomes