def roll_dice(n, m):
    p_total = sum(range(1, n + 1))
    c_total = sum(range(1, m + 1))

    return sum(i / (n * p_total) for i in range(1, min(n, m))) / (p_total * min(m, n))