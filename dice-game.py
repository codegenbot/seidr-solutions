```
def dice_game(n, m):
    total_outcomes = n * m
    higher_outcomes = sum(i > j for i in range(1, n+1) for j in range(1, m+1))
    return higher_outcomes / total_outcomes