def roll_dice(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(1 for i in range(m+1) for j in range(1, min(i,n)) if i-j > 0)
    return favorable_outcomes / total_outcomes