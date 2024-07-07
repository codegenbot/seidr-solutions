def roll_dice(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(1 for i in range(m+1) for j in range(min(i,m), min(n,i)+1))
    return favorable_outcomes / total_outcomes