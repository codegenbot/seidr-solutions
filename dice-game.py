def roll_dice(n, m):
    p_total = sum(range(1, n + 1))
    c_total = sum(range(1, m + 1))

    return sum(i / n for i in range(1, n)) / (p_total * c_total) if n > m else 0