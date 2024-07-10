def probability(n, m):
    total_outcomes = n * m
    peter_wins = 0
    for i in range(1, min(n, m) + 1):
        peter_wins += max(0, n - i) * (m - i)
    return peter_wins / total_outcomes