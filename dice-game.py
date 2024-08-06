```
def dice_game(n, m):
    total_outcomes = n * m
    favorable_outcomes = 0
    for i in range(m):
        favorable_outcomes += min(i+1, n-1)
    return favorable_outcomes / total_outcomes if total_outcomes > 0 else 0.0