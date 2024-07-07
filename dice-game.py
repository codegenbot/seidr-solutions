```
def roll_dice(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(1 for i in range(1,m+1) for j in range(2,min(i,n)+1) if i-j == 1)
    return favorable_outcomes / total_outcomes