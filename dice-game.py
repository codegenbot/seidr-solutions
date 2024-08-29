```
def roll_dice(n, m):
    total_outcomes = n * m
    higher_outcomes = sum((m - i) for i in range(1, min(n, m)+1))
    return higher_outcomes / total_outcomes