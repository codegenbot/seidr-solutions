def get_probability(n, m):
    total_outcomes = n * m
    probabilities = []
    for i in range(1, n + 1):
        for j in range(1, m + 1):
            if i > j:
                probabilities.append((i - j) / total_outcomes)
    return sum(probabilities)