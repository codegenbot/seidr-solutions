def roll_dice(n, m):
    total_cases = n * m
    favorable_cases = sum(1 for _ in range(m) for i in range(2, n))
    return favorable_cases / total_cases