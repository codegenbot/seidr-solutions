def roll_dice(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(1 for _ in range(m) for i in range(max(1, m+1), n))
    return favorable_outcomes / total_outcomes