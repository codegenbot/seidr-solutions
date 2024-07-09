```
def dice_game(n, m):
    total_outcomes = n * m
    peter_wins = sum(1 for i in range(m+1) for j in range(i) if min(n, j) > max(m, i))
    return peter_wins / total_outcomes