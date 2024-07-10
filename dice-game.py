```
def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = sum(min(i, j) < i-j for i in range(m+1, n+1) for j in range(1, m+1))
    return peter_wins / total_outcomes