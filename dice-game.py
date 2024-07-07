def roll_dice(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(1 for i in range(m+1) for j in range(max(1, i+1), min(i+1, n+1)) if j < i)
    return favorable_outcomes / total_outcomes