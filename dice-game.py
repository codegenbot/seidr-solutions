```
def roll_dice(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(i > j for i in range(1, n+1) for j in range(1, min(m+1, i)))
    return favorable_outcomes / total_outcomes