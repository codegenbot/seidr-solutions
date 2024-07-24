def probability(n, m):
    total_outcomes = n * m
    favorable_outcomes = min(n, m)
    return favorable_outcomes / total_outcomes