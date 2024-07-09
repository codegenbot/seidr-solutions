def roll_dice(n, m):
    p_total = n
    c_total = m

    total_outcomes = p_total * c_total

    probability = sum(1 for _ in range(1, min(n, m) + 1)) / total_outcomes
    return probability