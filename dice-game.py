```Python
def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(1 for i in range(1, n+1) for j in range(1, m+1) if i > j)
    return favorable_outcomes / total_outcomes