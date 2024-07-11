```
def roll_dice(n, m):
    total_outcomes = n * m
    peter_wins = sum(range(1, min(n, m) + 1)) + (n - min(n, m)) * (m - max(n, m))
    return peter_wins / total_outcomes