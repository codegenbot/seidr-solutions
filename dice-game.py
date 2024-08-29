def roll_dice(n, m):
    total_outcomes = n * m
    favorable_outcomes = sum(range(min(n, m), n*m))
    return (favorable_outcomes) / total_outcomes