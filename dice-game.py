```
def dice_game(n, m):
    total_outcomes = n * m
    probability = sum(min(i, j) + 1 if i > j else 0 for i in range(1, n+1) for j in range(1, m+1))
    return probability / total_outcomes