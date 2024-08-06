def roll_higher(n, m):
    total_outcomes = n * m
    higher_outcomes = 0

    for i in range(1, n + 1):
        for j in range(1, m + 1):
            if i > j:
                higher_outcomes += 1

    probability = higher_outcomes / total_outcomes
    return round(probability, 4)