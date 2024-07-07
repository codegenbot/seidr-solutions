```
def roll_dice(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(1 for i in range(1, m+1) for j in range(m+1, min(i*n, n*m)+1))
    return favorable_outcomes / total_outcomes