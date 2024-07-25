def roll_highest_probability(n, m):
    if n < m:
        return 0.0
    total = 1
    for i in range(1, m):
        total += 1 / n
    return total