```
def dice_game(n, m):
    if n < 1 or m < 1:
        return 0.0
    total_outcomes = n * m
    favorable_outcomes = sum(1 for i in range(m+1) for j in range(i+1, n+1))
    return favorable_outcomes / total_outcomes