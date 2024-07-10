```
def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = sum(1 for i in range(min(n,m)+1) if (i+1)*m <= n-1 and (i+1)*m < m)
    return peter_wins / total_outcomes