```
def roll_dice(n, m):
    total_outcomes = n * m
    probability = sum((n - i) / total_outcomes for i in range(1, min(n, m))) 
    return probability