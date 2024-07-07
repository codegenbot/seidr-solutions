```
def roll_dice(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(1 for i in range(1, min(m,n)) for j in range(min(i,m),n) if i != j)
    return favorable_outcomes / total_outcomes