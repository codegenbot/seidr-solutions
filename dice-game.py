def dice_game(n, m):
    if n == m:
        return 0
    total_prob = 0
    for i in range(1, min(m, n)):
        prob = (n - i) / n * (m - i + 1) / m
        total_prob += prob
    return round(total_prob, 6)