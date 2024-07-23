def roll_dice(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum((m-i+1)*(n-m+i) for i in range(min(m-1,n-1)+1))
    return 1 - favorable_outcomes / total_outcomes