```
def dice_game(n, m):
    total_outcomes = n * m
    strictly_higher_outcomes = sum(1 for i in range(m) for j in range(j+1, n+1))
    probability = strictly_higher_outcomes / total_outcomes
    return probability