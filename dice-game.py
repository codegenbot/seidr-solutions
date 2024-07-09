```
def roll_probability(n, m):
    if n < m:
        return 0
    total_outcomes = n * m
    outcomes_peter_higher = (n - m) * m + (m - 1) * (n - m)
    return outcomes_peter_higher / total_outcomes