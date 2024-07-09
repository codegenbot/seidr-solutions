def roll_dice(n, m):
    p_total = n
    c_total = m

    probability = sum(1 for _ in range(1, min(n, m)) if (n + i) > i) / (p_total * c_total)
    return probability