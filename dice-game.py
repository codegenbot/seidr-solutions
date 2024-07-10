```
def dice_game(n, m):
    total_cases = n * m
    peter_wins = sum(1 for i in range(m) for j in range(i+1, n)) + sum(1 for i in range(m) for j in range(1, min(i, n)))
    return peter_wins / total_cases